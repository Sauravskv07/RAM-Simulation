#include "freevar.h"
#include <stdio.h>
void displayFree(int* arr)
{	
	printf("Elements of free list are: \n[");
	int currentIndex=freevar;
	while(currentIndex!=-1)
		{
		printf("%d ,",currentIndex);
		currentIndex=arr[currentIndex+1];		
		}
	printf("]\n");
}	
