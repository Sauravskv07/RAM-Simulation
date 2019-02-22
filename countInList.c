#include <stdio.h>
int countInList(int ListNumber,int* arr,int* Larr)
{
	if(ListNumber>Larr[1])
	{
	printf("FAILURE : THIS LIST HAS NOT BEEN CREATED YET");
	return 0;
	}
	if(Larr[ListNumber+1]==-1)
		return 0;
	else
	{
		int currentIndex=Larr[ListNumber+1];
		int count=0;
		while(currentIndex!=-1)
		{
			count++;
			currentIndex=arr[currentIndex+1];
		}
		return count;
	
	}
}
