#ifndef INVOICE_SELECTOR_H
#define INVOICE_SELECTOR_H
#include "../nuklear.h"

typedef struct InvoiceSelector {
    
    void (*Draw)(struct InvoiceSelector* self, struct nk_context* ctx);
} InvoiceSelector;

#endif