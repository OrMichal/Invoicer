#include "./String.h"
#include <stdlib.h>

char* Substring(char* _text, int start, int length) {
    char* resp = malloc(length + 1);
    for (int i = 0; i < length; i++) {
        resp[i] = _text[start + i];
    }
    resp[length] = '\0';
    return resp;
}


char** Split(char* _text, char character) {
    char** resp = malloc(sizeof(char*) * 1000);
    int _respCount = 0;

    int start = 0;
    int i = 0;
    while (_text[i]) {
        if (_text[i] == character) {
            int len = i - start;
            if (len > 0) {
                resp[_respCount++] = Substring(_text, start, len);
            }
            start = i + 1;
        }
        i++;
    }

    if (i > start) {
        resp[_respCount++] = Substring(_text, start, i - start);
    }

    resp[_respCount] = NULL;
    return resp;
}


char* DeCSV(char* _text) {
    char* resp = malloc(1000);
    int _respCount = 0;

    for (int i = 0; _text[i]; i++) {
        resp[_respCount++] = _text[i] == '_' ? ' ' : _text[i];
    }
    resp[_respCount] = '\0';
    return resp;
}

char* CSV(char* _text) {
    char* resp = malloc(1000);
    int _respCount = 0;

    for(int i = 0; _text[i]; i++) {
        resp[_respCount++] = _text[i] == ' ' ? '_' : _text[i];
    }
    resp[_respCount] = '\n';
    return resp;
}

StringFc* init_StringFc() {
    StringFc* sfc = malloc(sizeof(StringFc));
    sfc->CSV = CSV;
    sfc->DeCSV = DeCSV;
    sfc->Split = Split;
    sfc->Substring = Substring;
    return sfc;
}