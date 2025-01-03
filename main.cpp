#include <vector>
#include <string>
#include "EventBroker.h"
#include "puppet.h"
#include <iostream>
#include "ObjectParent.h"


// The fun here is to make it a one way communication, messageBus doesnt know who is listening it will just "Scream into the void" for any listeners.

;int main(int argc, char* argv[]) {
	
	std::vector<__ObjectBASE*> listeners;

	EventBroker* eventBroker = new EventBroker();
	for (char i{ 0 }; i < 3; i++) {
		listeners.push_back(new puppet(eventBroker));
	}

	std::cout << eventBroker->scream() << std::endl;

	delete eventBroker;
	eventBroker = nullptr;
	return 0;
}