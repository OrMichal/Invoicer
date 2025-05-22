#ifndef EVENT_EMITTER_H
#define EVENT_EMITTER_H
#include "../../interfaces/signal/signal.h"
typedef struct EventEmitter {
    Signal** _signals;
    void (*SendSignal)(struct EventEmitter* self, const char* signalName);
    void (*AddSignal)(struct EventEmitter* self, Signal* signal);
} EventEmitter;

EventEmitter* init_EventEmitter();
void SendSignal(EventEmitter* self, const char* signalName);
#endif