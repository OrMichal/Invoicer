#include "event-emitter.h"
#include <stdlib.h>

void AddSignal(EventEmitter* emitter, Signal* signal) {
    emitter->_signals[emitter->_signalCount++] = signal;
}

void SendSignal(EventEmitter* emitter, char* signalName) {
    for(int i = 0; emitter->_signals[i]; i++) {
        Signal* currsig = emitter->_signals[i];
        if(currsig->name == signalName) {
            currsig->_event->Invoke(currsig->_event);
            return;
        }
    }
}

Signal* FindSignal(EventEmitter* emitter, char* signalName) {
    for(int i = 0; emitter->_signals[i]; i++) {
        if(emitter->_signals[i]->name == signalName) {
            return emitter->_signals[i];
        }
    }
}

EventEmitter* init_EventEmitter() {
    EventEmitter* em = malloc(sizeof(EventEmitter));
    em->_signals = malloc(sizeof(Signal) * 4);
    em->_signalCount = 0;
    em->SendSignal = SendSignal;
    em->AddSignal = AddSignal;
    em->FindSignal = FindSignal;

    return em;
}