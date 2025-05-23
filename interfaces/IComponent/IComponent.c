#include "IComponent.h"
#include <stdlib.h>

void base_draw(IComponent* component, struct nk_context* ctx) {
    nk_label(ctx, component->name, NK_LEFT);
}

IComponent* init_Component() {
    IComponent* comp = malloc(sizeof(IComponent));
    comp->Draw = base_draw;
    comp->name = "component";
    return comp;
}