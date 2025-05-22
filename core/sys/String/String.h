#ifndef STRING_H
#define STRING_H

typedef struct StringFc{
    char** (*Split)(char* _text, char character);
    char* (*CSV)(char* _text);
    char* (*DeCSV)(char* _text);
    char* (*Substring)(char* _text, int start, int length);
} StringFc;

StringFc* init_StringFc();
char** Split(char* _text, char character);
char* CSV(char* _text);
char* DeCSV(char* _text);
char* Substring(char* _text, int stat, int length);

#endif