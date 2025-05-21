#ifndef DATA_SERVICE_H
#define DATA_SERVICE_H
#include "../../UI/invoice-volume/invoice_volume.h"

typedef struct DataService{
    char* InvoiceDataPath;
    InvoiceVolume** _data;
    InvoiceVolume** (*GetData)(DataService* self);
    char** (*GetHeaders)(DataService* self);
} DataService;

DataService* init_dataservice(char* InvoiceDataPath);
InvoiceVolume** GetData(DataService* self);
char** (*GetHeaders)(DataService* self);
#endif /* DATA_SERVICE_H */
