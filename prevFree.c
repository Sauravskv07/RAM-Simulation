#include "freevar.h"
int prevfree(int index,int * arr)
{
	int currentIndex=freevar;	
	if(index==freevar)
		return -1;
	int prevFree=0;
	while(currentIndex!=-1)
	{
	if(index==currentIndex)
		return prevFree;
	prevFree=currentIndex;
	currentIndex=arr[currentIndex+1];
	}
	return prevFree;
}
