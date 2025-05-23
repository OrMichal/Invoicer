#ifndef ICOMPONENT_H
#define ICOMPONENT_H
#include "../../nuklear.h"

typedef struct IComponent {
    char* name;
    void (*Draw)(struct IComponent* component, struct nk_context* ctx);
} IComponent;

IComponent* init_Component();

#endif
