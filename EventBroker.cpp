#include "EventBroker.h"
#include "ObjectParent.h"
#include <string>
#include <iostream>

std::string EventBroker::scream()
{
	// I cant know who is istening for the purpose of the fun!
	std:: cout<<  "SCREAMING INTO THE VOID!! i dont know who is listening...\n";
	for (ObjectBASE_Event boundEvent : boundEvents) {
		std::cout << boundEvent.boundEvent_static(boundEvent.boundObject);
	}
	return "";
}
