#pragma once
#include "OBJECTBASE.h"
#include <string>
#include <vector>

struct ObjectBASE_Event {
	__ObjectBASE* boundObject;
	messageRecievedFuncPtr_lesssfucked boundEvent_static;
};

class EventBroker
{
public:
	std::string scream();
	std::vector<ObjectBASE_Event> boundEvents;
private:
};

