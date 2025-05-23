#ifndef INVOICE_SELECTOR_H
#define INVOICE_SELECTOR_H
#include "../../nuklear.h"
#include "../../core/Event-emitter/event-emitter.h"
#include "../../core/Application/application.h"
#include "../../interfaces/IComponent/IComponent.h"

typedef struct InvoiceSelector {
    EventEmitter* _evEmitter;
    Application* _app;
    int selectedInvoiceIndex;
    void (*EmitClick)(struct InvoiceSelector* self, const int index);
} InvoiceSelector;

InvoiceSelector* init_InvoiceSelector(Application* _app);
void EmitClick(InvoiceSelector* self, const int index);
void draw_selector(InvoiceSelector* selector, struct nk_context* ctx);
#endif