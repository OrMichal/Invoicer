#include <stdio.h>
#include "data-service.h"

InvoiceVolume** GetData(DataService* self) {
    FILE* fptr = fopen(self->InvoiceDataPath, "r");
    
    if(!fptr) {
        perror("source file not found");
        return;
    }

    char line[4096];
    fgets(line, sizeof(line), fptr);

    while(fgets(line,sizeof(line),fptr)) {
        
    }
    fclose(fptr);
}