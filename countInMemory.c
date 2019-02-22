#include "countInList.h"
int countInMemory(int* arr,int* Larr)
{
	int sum=0;
	for(int i=1;i<=Larr[1];i++)
		{
		sum=sum+countInList(i,arr,Larr);
		}
	return sum;
}
