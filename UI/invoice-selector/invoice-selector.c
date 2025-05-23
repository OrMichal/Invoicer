#include "invoice-selector.h"

void EmitClick(InvoiceSelector* self, const int index) {
    self->selectedInvoiceIndex = index;
    self->_app->activeInvoice = self->_app->_invoiceService->GetInvoiceForm(self->_app->_invoiceService, index);
    
    self->_evEmitter->SendSignal(self->_evEmitter, "clicked");
}

void draw_selector(InvoiceSelector* self, struct nk_context* ctx) {
    for(int i = 0; self->_app->GetInvoiceHeaders(self->_app)[i]; i++) {
        if(nk_button_label(ctx, self->_app->GetInvoiceHeaders(self->_app)[i])) {
            self->EmitClick(self, i);
        }
    }
}

InvoiceSelector* init_InvoiceSelector(Application* _app) {
    InvoiceSelector* envs = malloc(sizeof(InvoiceSelector));

    envs->_app = _app;
    envs->selectedInvoiceIndex = 0;
    envs->EmitClick = EmitClick;
    envs->_evEmitter = _app->_emitter;
    
    return envs;
}