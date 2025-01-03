#pragma once
#include <vector>
#include "OBJECTBASE.h"
#include <string>


class ObjectParent : public __ObjectBASE
{
public:
	//bool broadCastRecieved();
protected:
	__ObjectBASE* baseInstance = this;
	//std::string recieveMessage() override;
	//std::vector<messageRecievedFuncPtr> functionsToCall;
	~ObjectParent();
};

