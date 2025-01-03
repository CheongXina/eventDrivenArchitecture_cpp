#pragma once
#include <vector>
#include "OBJECTBASE.h"
#include <string>


class ObjectParent : public __ObjectBASE
{
public:
protected:
	__ObjectBASE* baseInstance = this;
	~ObjectParent();
};

