#include "event.h"
#include <stdlib.h>

void Append(Event* event, void* action){
    event->_actions[event->_count++] = action;
}

void Invoke(Event* event){
    for(int i = 0; i < event->_count; i++){
        ((void(*)())event->_actions[i])();
    }
}

Event* init_Event(){
    Event* ev = malloc(sizeof(Event));
    ev->_actions = malloc(sizeof(void*) * 10);
    ev->_count = 0;
    ev->Invoke = Invoke;
    ev->Append = Append;
    return ev;
}

void Destroy(Event* self){
    free(self->_actions);
    free(self);
}