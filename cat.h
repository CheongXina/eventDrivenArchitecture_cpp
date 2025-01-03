#pragma once
#include "ObjectParent.h"
#include "EventBroker.h"

class Cat : public __ObjectBASE
{
public:
	std::string recieveMessage()
	{
		std::string message = "\nMeow!";
		return message;
	}
	//class EventBroker* screamerRef;
	void loadFunctionPointerTo_ParentListenList(EventBroker* screamer);
	Cat(EventBroker* screamer);
	~Cat();
private:
	static std::string recieveMessageStatic(__ObjectBASE* obj) {
		return static_cast<Cat*>(obj)->recieveMessage();
	}
};

