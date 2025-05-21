#include "invoice_volume.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

InvoiceVolume* new_invoice_volume(const char* label, const char* data) {
    InvoiceVolume* vol = malloc(sizeof(InvoiceVolume));
    if (!vol) return NULL;

    strncpy(vol->Label, label, sizeof(vol->Label));
    strncpy(vol->Data, data, sizeof(vol->Data));

    vol->GetVolume = get_volume;
    vol->SetData = set_volume_data;

    return vol;
}

void set_volume_data(InvoiceVolume* volume, const char* new_data) {
    if (volume && new_data) {
        strncpy(volume->Data, new_data, sizeof(volume->Data));
    }
}

void get_volume(struct nk_context* ctx, InvoiceVolume* volume) {
    if (!ctx || !volume) return;

    nk_layout_row_dynamic(ctx, 30, 1);
    nk_label(ctx, volume->Label, NK_TEXT_LEFT);

    nk_edit_string_zero_terminated(ctx, NK_EDIT_FIELD, volume->Data, sizeof(volume->Data), nk_filter_default);
}
