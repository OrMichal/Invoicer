#include "FileReader.h"
#include <string.h>

char** init_read_file(char* file_name) {
    int _count = 0;
    char** result = malloc(sizeof(char*) * 1000);
    FILE* fptr = fopen(file_name, "r");

    if (!fptr) return NULL;

    char line[65535];
    while (fgets(line, sizeof(line), fptr)) {
        size_t len = strlen(line);
        if (len > 0 && line[len - 1] == '\n') {
            line[len - 1] = '\0';
        }

        result[_count] = malloc(len + 1);
        strcpy(result[_count], line);
        _count++;
    }

    fclose(fptr);
    return result;
}


void init_write_to_file(char* file_name, char** _data) {
    FILE* fptr = fopen(file_name, "w");
    int i = 0;
    while(_data[i] != NULL) {
        fprintf(fptr,_data[i]);
        i++;
    }
    fclose(fptr);
}

FileService* init_FileService() {
    FileService* fs = malloc(sizeof(FileService));
    fs->ReadFile = init_read_file;
    fs->WriteToFile = init_write_to_file;
    return fs;
}