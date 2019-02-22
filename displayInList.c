#include <stdio.h>
void displayInList(int ListNumber,int* arr,int* Larr)
{
	printf("Elements of list - %d are\n",ListNumber);
	printf("Key\tNext\tPrev\n");
	if(Larr[ListNumber+1]==-1)
		{}
	else
		{
		int currentIndex=Larr[ListNumber+1];
		while(currentIndex!=-1)
			{
			printf("%d\t%d\t%d\t\n",arr[currentIndex],arr[currentIndex+1],arr[currentIndex+2]);
			currentIndex=arr[currentIndex+1];
			}
		}
}
