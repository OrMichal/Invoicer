#include "signal.h"
#include <stdlib.h>

Signal* init_signal(const char* name, Event* event) {
    Signal* sg = malloc(sizeof(Signal));
    sg->name = name;
    sg->_event = event;
    return sg;
}