#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "nuklear_impl.h"
#include "core/Application/application.h"
#include "namespace.h"

static struct nk_context* g_ctx;
static InvoiceForm* g_form;
static InvoiceSelector* g_selector;

void formDraw() {
    draw_invoice_form(g_ctx, g_form);
}

void selectorDraw() {
    draw_selector(g_selector, g_ctx);
}

int main(void) {

    if (!glfwInit()) {
        fprintf(stderr, "Failed to init GLFW\n");
        return -1;
    }

    GLFWwindow* win = glfwCreateWindow(800, 600, "Invoicer", NULL, NULL);
    if (!win) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(win);
    glewExperimental = GL_TRUE;
    if (glewInit() != GLEW_OK) {
        fprintf(stderr, "Failed to init GLEW\n");
        return -1;
    }

    struct nk_glfw glfw;
    nk_glfw3_init(&glfw, win, NK_GLFW3_INSTALL_CALLBACKS);

    struct nk_colorf bg = {0.10f, 0.18f, 0.24f, 1.0f};

    struct nk_font_atlas *atlas;
    nk_glfw3_font_stash_begin(&glfw, &atlas);
    const char* font_path = "./fonts/DejaVuSans.ttf";

    struct nk_font* my_font = nk_font_atlas_add_from_file(atlas, font_path, 16, 0);
    if (!my_font) {
        fprintf(stderr, "Failed to load font at %s\n", font_path);
        my_font = atlas->default_font;
    } else {
        fprintf(stdout, "Font loaded successfully: %s\n", font_path);
    }

    nk_glfw3_font_stash_end(&glfw);
    nk_style_set_font(&glfw.ctx, &my_font->handle);
// -------------------------------------------------------------------------------------------------
    Application* app = init_Application();

    InvoiceForm* form = app->_invoiceService->GetInvoiceForm(app->_invoiceService ,0);
    g_ctx = &glfw.ctx;
    g_form = form;
    free(form);

    app->_emitter->FindSignal(app->_emitter ,"run")->_event->Append(
        app->_emitter->FindSignal(app->_emitter, "run")->_event,
        formDraw
    );

    InvoiceSelector* selector = init_InvoiceSelector(app);
    g_selector = selector;
    free(selector);

    app->_emitter->FindSignal(app->_emitter ,"run")->_event->Append(app->_emitter->FindSignal(app->_emitter, "run")->_event, formDraw);
    app->_emitter->FindSignal(app->_emitter ,"run")->_event->Append(app->_emitter->FindSignal(app->_emitter, "run")->_event, selectorDraw);

    while (!glfwWindowShouldClose(win)) {
        glfwPollEvents();
        nk_glfw3_new_frame(&glfw);

        app->Run(app);

        int width, height;
        glfwGetFramebufferSize(win, &width, &height);
        glViewport(0, 0, width, height);
        glClearColor(bg.r, bg.g, bg.b, bg.a);
        glClear(GL_COLOR_BUFFER_BIT);
        nk_glfw3_render(&glfw, NK_ANTI_ALIASING_ON, 512 * 1024, 128 * 1024);
        glfwSwapBuffers(win);
    }
    
    nk_glfw3_shutdown(&glfw);
    glfwTerminate();
    return 0;
}
