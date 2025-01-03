#include "puppet.h"
#include "EventBroker.h"


void puppet::loadImages()
{
}

std::string puppet::recieveMessage()
{
	std::string message = "hello i am " + name + "!\n";
	return message;
}

puppet::puppet()
{
	screamerRef = nullptr;
	messageEvent = nullptr;
}

puppet::puppet(EventBroker* screamer, const std::string& nameParam)
{
	screamerRef = screamer;
	name = nameParam;
	loadFunctionPointerTo_ParentListenList();
}

puppet::puppet(EventBroker* screamer)
{
	screamerRef = screamer;
	std::vector<std::string> randomNames = { "slappy","bobby", "billy", "benny", "frankie", "sammy", "megan","mickey", "tommy", "roddy" };
	std::random_device rd;               // Seed source
	std::mt19937 gen(rd());             // Mersenne Twister engine
	std::uniform_int_distribution<int> dist(0, 7);
	name = randomNames[dist(gen)];
	loadFunctionPointerTo_ParentListenList();
}

void puppet::loadFunctionPointerTo_ParentListenList()
{
	functionsToCall.push_back(&__ObjectBASE::recieveMessage);
	ObjectBASE_Event eventt;
	eventt.boundObject = this;
	eventt.boundEvent_static = &puppet::recieveMessageStatic;
	screamerRef->boundEvents.push_back(eventt);

}
