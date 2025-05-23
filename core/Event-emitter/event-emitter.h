#ifndef EVENT_EMITTER_H
#define EVENT_EMITTER_H
#include "../../interfaces/signal/signal.h"
typedef struct EventEmitter {
    Signal** _signals;
    int _signalCount;
    void (*SendSignal)(struct EventEmitter* self, char* signalName);
    void (*AddSignal)(struct EventEmitter* self, Signal* signal);
    Signal* (*FindSignal)(struct EventEmitter* self, char* signalName);
} EventEmitter;

EventEmitter* init_EventEmitter();
void SendSignal(EventEmitter* self, char* signalName);
Signal* FindSignal(EventEmitter* self, char* signalName);
#endif