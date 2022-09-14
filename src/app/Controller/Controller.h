#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include <string>
#include "Service.h"

class Controller
{
private:
    int lightState;
    Service *service;

public:
    Controller(Service *serv);
    virtual ~Controller();
    void updateEvent(std::string strBtn);
};

#endif /* __CONTROLLER_H__ */