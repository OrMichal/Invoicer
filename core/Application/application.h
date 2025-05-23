#ifndef APPLICATION_H
#define APPLICATION_H
#include "../../services/Invoice-service/invoice-service.h"
#include "../Event-emitter/event-emitter.h"
#include "../../interfaces/IComponent/IComponent.h"

typedef struct Application {
    InvoiceForm* activeInvoice;
    InvoiceForm** _forms;
    IComponent** _activeComponents;
    int _activeComponentCount;
    InvoiceService* _invoiceService;
    EventEmitter* _emitter;
    void (*LoadInvoice)(struct Application* app, struct nk_context* ctx);
    char** (*GetInvoiceHeaders)(struct Application* app);
    void (*Run)(struct Application* app);
    void (*AddActiveComponent)(struct Application* app, IComponent* component);
} Application;

Application* init_Application();
void Run(Application* _app);

#endif