#include "displayInList.h"
#include <stdio.h>
void displayInMemory(int* arr,int* Larr)
{
	for(int i=1;i<=Larr[1];i++)
		{
		displayInList(i,arr,Larr);
		printf("\n");
		}
	
}
