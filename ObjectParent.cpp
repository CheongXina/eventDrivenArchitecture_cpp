#include "ObjectParent.h"

/*
bool ObjectParent::broadCastRecieved()
{
    if (functionsToCall.empty()) {
        for (messageRecievedFuncPtr& funcptr : functionsToCall) {
            (baseInstance->*funcptr)();
       }
    }
    return true;
}
*/
/*
std::string ObjectParent::recieveMessage()
{
    return "I am the parent class you shouldnt be seeing this";
}
*/
ObjectParent::~ObjectParent()
{
   // baseInstance = nullptr;
    //functionsToCall.clear();
}

__ObjectBASE::~__ObjectBASE()
{
}
