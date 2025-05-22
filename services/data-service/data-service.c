#include <stdio.h>
#include <stdlib.h>
#include "data-service.h"
#include "../../core/sys/String/String.h"

InvoiceForm** GetInvoiceForms(DataService* self) {
    InvoiceForm** resp = malloc(sizeof(InvoiceForm*) * 30);
    int _formCount = 0;

    char** _data = self->_fileservice->ReadFile("/home/orsah/Desktop/Invoicer/src/Invoices.csv");
    char** _labels = self->StringFc->Split(_data[0], ',');
    
    for(int i = 1; _data[i]; i++) {
        InvoiceForm* form = invoice_form_init();
        char* row = _data[i];
        char** rowData = self->StringFc->Split(row,',');

        for(int j = 0; rowData[j]; j++) {
            form->AddVolume(form, new_invoice_volume(_labels[j], rowData[j]));
        }
        resp[_formCount++] = form;
    }
    return resp;
}

DataService* init_dataservice() {
    DataService* ds = malloc(sizeof(DataService));
    StringFc* sfc = init_StringFc();
    FileService* fs = init_FileService();
    ds->GetInvoiceForms = GetInvoiceForms;
    ds->StringFc = sfc;
    ds->_fileservice = fs;
    return ds;
}