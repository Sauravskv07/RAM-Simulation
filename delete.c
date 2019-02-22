#include <stdio.h>
#include "freevar.h"
#include "push.h"


int * delete(int ListNumber,int arr[],int Larr[],int element)	
{	
	//printf("Inside delete");
	if(Larr[1]==0)
		{
		//printf("Inside delete first if");
		printf("FAILURE: THIS LIST YET NOT CREATED\n");
		return arr;
		}
	if(ListNumber>Larr[1])
		{
		printf("FAILURE: THIS LIST YET NOT CREATED\n");
		return arr;
		}
	if(Larr[ListNumber+1]==-1)
		{
		printf("FAILURE:LIST EMPTY\n");
		return arr;
		}
	else
		{
		int currentIndex=Larr[ListNumber+1];
		if(arr[currentIndex]==element)
			{
			printf("SUCCESS: ELEMENT DELETED\n");
			Larr[ListNumber+1]=arr[currentIndex+1];
			arr[arr[currentIndex+1]+2]=-1;
			arr=push(arr,currentIndex);
			return arr;		
			}
		currentIndex=arr[currentIndex+1];
		//int temp=0;
		//printf("current index is %d",currentIndex);
		while(currentIndex!=-1 && arr[currentIndex]!=element)
			{
			//temp=currentIndex;
			currentIndex=arr[currentIndex+1];
			}
		if(currentIndex==-1)
			{
			//if(arr[currentIndex]==element)
			//	{
			//	arr[arr[currentIndex+2]+1]=-1;
			//	arr=push(arr,currentIndex);
			//	return arr;
			//	}	
			printf("FAILURE: ELEMENT NOT THERE\n");
			return arr;
			}
		else
			{
			arr[arr[currentIndex+1]+2]=arr[currentIndex+2];
			arr[arr[currentIndex+2]+1]=arr[currentIndex+1];
			arr=push(arr,currentIndex);
			printf("SUCCESS: ELEMENT DELETED\n");
			return arr;
			}
		}
}
