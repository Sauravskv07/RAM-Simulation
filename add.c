#include "pop.h"
#include "doubleMemory.h"
#include <stdio.h>
int* add(int ListNumber,int* arr,int* Larr,int element)
{	
	//printf("inside add");
	if(Larr[ListNumber+1]==-1)
	{
		if(arr[freevar+1]==-1)//if there is no free element left
			{
			arr=doubleMemory(arr);// then we will make the memory of double size it previously was.
			}
		int FreeIndex=pop(arr);
		Larr[ListNumber+1]=FreeIndex;
		arr[FreeIndex]=element;
		arr[FreeIndex+1]=-1;
		arr[FreeIndex+2]=-1;
		return arr;
	}
	else
	{	
		int currentIndex=Larr[ListNumber+1];
		if(arr[currentIndex]>element)
		{
			if(arr[freevar+1]==-1)//if there is no free element left
				{
				arr=doubleMemory(arr);// then we will make the memory of double size it previously was.
				}
			int FreeIndex=pop(arr);
			Larr[ListNumber+1]=FreeIndex;
			arr[currentIndex+2]=FreeIndex;
			arr[FreeIndex]=element;
			arr[FreeIndex+1]=currentIndex;
			arr[FreeIndex+2]=-1;
			return arr;			
		}
		//printf("current index %d",currentIndex);
		int temp;
		while(currentIndex!=-1 && arr[currentIndex]<=element)
		{	
			temp=currentIndex;
			currentIndex=arr[currentIndex+1];
			//printf("current index %d\n",currentIndex);
		}
		if(currentIndex==-1)
		{
			if(arr[freevar+1]==-1)//if there is no free element left
				{
				arr=doubleMemory(arr);// then we will make the memory of double size it previously was.
				}
			int FreeIndex=pop(arr);
			//printf("freeIndex1 %d\n",FreeIndex);
			arr[temp+1]=FreeIndex;
			arr[FreeIndex]=element;
			arr[FreeIndex+1]=-1;
			arr[FreeIndex+2]=temp;
			return arr;
		}
		else
		{
			if(arr[freevar+1]==-1)//if there is no free element left
				{
				arr=doubleMemory(arr);// then we will make the memory of double size it previously was.
				}
			int FreeIndex=pop(arr);
			//printf("freeIndex2 %d\n",FreeIndex);
			arr[FreeIndex]=element;
			arr[FreeIndex+1]=currentIndex;
			arr[FreeIndex+2]=arr[currentIndex+2];
			arr[arr[currentIndex+2]+1]=FreeIndex;
			arr[currentIndex+2]=FreeIndex;
			return arr;
		}
	}
}
