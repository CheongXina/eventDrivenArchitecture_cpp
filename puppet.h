#pragma once
#include "ObjectParent.h"
#include <string>
#include <vector>
#include "EventBroker.h"
#include <random>

typedef std::string(EventBroker::* memberFuncPtr)();



class puppet : public ObjectParent
{
public:
	std::string recieveMessage() override;
	void loadImages();
	class EventBroker* screamerRef;
	memberFuncPtr messageEvent;
	static std::string recieveMessageStatic(__ObjectBASE* obj) {
		return static_cast<puppet*>(obj)->recieveMessage();
	}
	/* okay maybe i need a generic parent class that contains a responseMessage funcptr std::vector, puppet just adds its recieveMessage to it
		and then the main holds a reference to all these generic objects and main has a function called broadcast which event broker holsd a funcptr to that it calls when it screams
		broadcast will loop through all these generic objects and run through its funcptr to call.
	*/
	puppet();
	puppet(EventBroker* screamer, const std::string& nameParam);
	puppet(EventBroker* screamer);
protected:
	std::string name;
	std::string resourceName_face;
	void loadFunctionPointerTo_ParentListenList();
};

