#include "application.h"
#include "../../UI/invoice-selector/invoice-selector.h"
#include <stdlib.h>

void Run(Application* app) {
    app->_emitter->SendSignal(app->_emitter,"run");
}

void AddActiveComponent(Application* app, IComponent* component) {
    app->_activeComponents[app->_activeComponentCount++] = component;
}

Application* init_Application() {
    Application* app = malloc(sizeof(Application));
    InvoiceService* invs = init_invoice_service();
    EventEmitter* emitter = init_EventEmitter();

    app->_emitter = emitter;
    app->_invoiceService = invs;
    app->_activeComponents = malloc(sizeof(InvoiceForm) + sizeof(InvoiceSelector));
    app->AddActiveComponent = AddActiveComponent;

    app->Run = Run;

    Event* runEvent = init_Event();

    Signal* sig = init_signal("run", runEvent);
    app->_emitter->AddSignal(app->_emitter, sig);

    return app;
}