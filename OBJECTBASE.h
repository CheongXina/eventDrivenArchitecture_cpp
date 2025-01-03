#pragma once
#include <string>

class __ObjectBASE {
public:
	//virtual std::string recieveMessage() = 0;
	~__ObjectBASE();
};

typedef std::string(__ObjectBASE::* messageRecievedFuncPtr)();
typedef std::string(*messageRecievedFuncPtr_lesssfucked)(__ObjectBASE*);
