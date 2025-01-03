#include "cat.h"

void Cat::loadFunctionPointerTo_ParentListenList(EventBroker* screamer)
{
	ObjectBASE_Event eventt;
	eventt.boundObject = this;
	eventt.boundEvent_static = &Cat::recieveMessageStatic;
	screamer->boundEvents.push_back(eventt);
}

Cat::Cat(EventBroker* screamer)
{
	loadFunctionPointerTo_ParentListenList(screamer);
}

Cat::~Cat()
{
}
