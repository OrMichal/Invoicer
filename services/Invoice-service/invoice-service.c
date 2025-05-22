#include "invoice-service.h"
#include <stdlib.h>

InvoiceForm* get_invoice_form(InvoiceService* self, int index) {
    int id = (!index || index < 0) ? index : 0;

    return self->_dataService->GetInvoiceForms(self->_dataService)[id];
}

InvoiceService* init_invoice_service() {
    InvoiceService* invs = malloc(sizeof(InvoiceService));
    DataService* ds = init_dataservice();
    invs->GetInvoiceForm = get_invoice_form;
    invs->_dataService = ds;
    
    return invs;
}