#include "FileReader.h"

char** init_read_file(char* file_name) {
    int _count = 0;
    char** result;
    FILE* fptr = fopen(file_name, "r");
    
    if(!fptr) return NULL;
    char line[4096];
    while(fgets(line, sizeof(line), fptr)){
        result[_count++] = line;
    }
    fclose(fptr);
    return result;
}

void init_write_to_file(char* file_name, char** _data) {
    FILE* fptr = fopen(file_name, "w");
    
}