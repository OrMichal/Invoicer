#ifndef SIGNAL_H
#define SIGNAL_H
#include "../../core/Event/event.h"
typedef struct Signal {
    char* name;
    Event* _event;
} Signal;

Signal* init_signal(const char* name, Event* event);
#endif
