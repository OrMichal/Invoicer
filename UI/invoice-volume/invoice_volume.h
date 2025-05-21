#ifndef INVOICE_VOLUME_H
#define INVOICE_VOLUME_H

#include "../../nuklear.h"

typedef struct InvoiceVolume{
    char Label[64];
    char Data[128];
    void (*GetVolume)(struct nk_context* ctx, struct InvoiceVolume* volume);
    void (*SetData)(struct InvoiceVolume* volume, const char* new_data);
} InvoiceVolume;

InvoiceVolume* new_invoice_volume(const char* label, const char* data);
void get_volume(struct nk_context* ctx, InvoiceVolume* volume);
void set_volume_data(InvoiceVolume* volume, const char* new_data);

#endif