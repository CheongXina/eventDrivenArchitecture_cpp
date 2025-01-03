#pragma once
#include <string>

class __ObjectBASE {
public:
	~__ObjectBASE();
};

typedef std::string(__ObjectBASE::* messageRecievedFuncPtr)();
typedef std::string(*messageRecievedFuncPtr_lesssfucked)(__ObjectBASE*);
