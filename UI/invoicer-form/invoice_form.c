#include "invoice_form.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

InvoiceForm* invoice_form_init() {
    InvoiceForm* form = malloc(sizeof(InvoiceForm));
    if (!form) return NULL;

    form->Title = "Faktura - Daňový doklad";
    form->field_count = 0;
    form->AddVolume = invoice_form_add_field;
    form->DrawForm = draw_invoice_form;
    form->Destroy = destroy_invoice;
    form->OnInvoiceSelected = on_invoiceselected_impl;

    form->AddVolume(form, new_invoice_volume("IČ", ""));
    form->AddVolume(form, new_invoice_volume("DIČ", ""));

    return form;
}

void invoice_form_add_field(InvoiceForm* form, InvoiceVolume* volume) {
    if (form->field_count < MAX_FIELDS) {
        form->Fields[form->field_count++] = volume;
    }
}

void draw_invoice_form(struct nk_context* ctx, InvoiceForm* form) {
    if (!ctx || !form) return;

    if (nk_begin(ctx, form->Title, nk_rect(0, 0, 400, 600), NK_WINDOW_BORDER | NK_WINDOW_TITLE)) {
        for (int i = 0; i < form->field_count; i++) {
            form->Fields[i]->GetVolume(ctx, form->Fields[i]);
        }

        if (nk_button_label(ctx, "Exportovat")) {
            nk_label(ctx, "Export byl úspěšný", NK_LEFT);
            for(int i = 0; i < form->field_count; i++){
                printf("%s\n", form->Fields[i]->Data);
            }
        }
    }
    nk_end(ctx);
}

void on_invoiceselected_impl(InvoiceForm* self){
    return;
}

void destroy_invoice(InvoiceForm* form){
    free(form);
}