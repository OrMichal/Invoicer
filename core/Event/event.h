#ifndef EVENT_H
#define EVENT_H

typedef struct Event {
    void** _actions;
    int _count;
    void (*Invoke)(Event* event);
    void (*Append)(Event* event, void* action);
    void (*Destroy)(Event* self);
} Event;

void Invoke(Event* event);
void Append(Event* event,void* action);
Event* init_Event();
void Destroy(Event* self);
#endif /* EVENT_H */