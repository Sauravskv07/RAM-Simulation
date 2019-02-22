#include "freevar.h"
#include <stdlib.h>
#include <stdio.h>
int* doubleMemory(int* arr)//this function is to double the memory when no free space is left
{	
	int newSize=(((arr[0]*2)/3)*3 +1);
	//printf("newSize= %d\n old size=%d",newSize,arr[0]);
	int* newList=(int *)malloc(sizeof(int)*newSize);//the memory should be a multiple of 3 +1 to store the number of elements
	for(int i=0;i<newSize;i++)
		newList[i]=0;
	newList[0]=newSize;//the first memory location to store the lenght of the array
	//for(int i=0;i<newSize;i++)
	//	printf("%d,",newList[i]);
	for(int i=1;i<arr[0];i++)
	{
		newList[i]=arr[i];//recovering the data from the previous array
	}
	for(int i=arr[0];i<newSize;i++)
	{
	//printf("inside this\n");
		if(i%3==2)
		{
		//printf("inside that");
		newList[i]=i+2;//storing the index of the next free location
		}
	}
	newList[freevar+1]=arr[0];
	newList[newSize-2]=-1;
	//for(int i=0;i<newSize;i++)
	//	printf("%d,",newList[i]);
	//printf("next Free=%d\n",newList[freevar+1]);
	//printf("freevar=%d\n",freevar);
	return newList;

}
