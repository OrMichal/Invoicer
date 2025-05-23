#ifndef INVOICE_FORM_H
#define INVOICE_FORM_H

#include "../../nuklear.h"
#include "../../UI/invoice-volume/invoice_volume.h"
#include "../../interfaces/IComponent/IComponent.h"

#define MAX_FIELDS 40

typedef struct InvoiceForm{
    char* Title;
    InvoiceVolume* Fields[MAX_FIELDS];
    int field_count;
    void (*AddVolume)(struct InvoiceForm* form, InvoiceVolume* volume);
    void (*OnInvoiceSelected)(struct InvoiceForm* self);
    void (*Destroy)(struct InvoiceForm* form);
} InvoiceForm;

InvoiceForm* invoice_form_init();
void invoice_form_add_field(InvoiceForm* form, InvoiceVolume* volume);
void destroy_invoice(InvoiceForm* form);
void on_invoiceselected_impl(InvoiceForm* self);
void draw_invoice_form(struct nk_context* ctx, InvoiceForm* form);

#endif
