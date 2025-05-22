#ifndef DATA_SERVICE_H
#define DATA_SERVICE_H

#include "../../UI/invoicer-form/invoice_form.h"
#include "../FileReader/FileReader.h"
#include "../../core/sys/String/String.h"

typedef struct DataService{
    StringFc* StringFc;
    FileService* _fileservice;
    InvoiceForm** (*GetInvoiceForms)(struct DataService* self);
} DataService;

DataService* init_dataservice();
InvoiceForm** GetInvoiceForms(DataService* self);

#endif