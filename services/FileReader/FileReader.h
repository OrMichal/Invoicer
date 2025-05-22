#ifndef FILESERVICE_H
#define FILESERVICE_H
#include <stdio.h>
#include <stdlib.h>

typedef struct FileService{
    char** (*ReadFile)(char* file_name);
    void (*WriteToFile)(char* file_name, char** _data);
} FileService;

FileService* init_FileService();
char** init_read_file(char* file_name);
void init_write_to_file(char* file_name, char** _data);

#endif