
#include "Header2.h"
#include <iostream>

static myFunc myStoredFunc = nullptr;
static functionlMyFunc myStoredfunctionlMyFunc = nullptr;

void setMyFunc(myFunc my)
{
	myStoredFunc = my;
}

void setMyFunc2(functionlMyFunc myFunctionlMyFunc)
{
	myStoredfunctionlMyFunc = myFunctionlMyFunc;
}


int SomeLowLevelFunc()
{
	int retVal = 0;
	if (myStoredFunc)
	{
		retVal = myStoredFunc("Hello from Low Level Function\n");
		myStoredfunctionlMyFunc("Hello also from Low Level Function\n");
	}
	else
	{
		retVal = -1;
		std::cout << "Hello from alt low level function (non-callback)" << std::endl;
	}

	return retVal;
}