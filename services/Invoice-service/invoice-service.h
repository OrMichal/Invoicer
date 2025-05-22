#ifndef INVOICE_SERVICE_H
#define INVOICE_SERVICE_H
#include "../../UI/invoicer-form/invoice_form.h"
#include "../data-service/data-service.h"

typedef struct InvoiceService {
    DataService* _dataService;
    InvoiceForm* (*GetInvoiceForm)(struct InvoiceService* self, int index);
} InvoiceService;

InvoiceService* init_invoice_service();
InvoiceForm* get_invoice_form(InvoiceService* self, int index);

#endif
