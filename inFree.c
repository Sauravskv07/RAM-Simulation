#include <stdbool.h>
#include "freevar.h"
bool isFree(int index,int* arr)
{
	int currentIndex=freevar;
	while(currentIndex!=-1)
	{
	if(index==currentIndex)
		return true;
	currentIndex=arr[currentIndex+1];
	}
	return false;
}
