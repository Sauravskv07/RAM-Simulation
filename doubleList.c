#include <stdlib.h>
int* doubleList(int Larr[])
{
	int* newList=(int*)malloc(sizeof(int)*(Larr[0]*2));//doubling the size of the list
	newList[0]=Larr[0]*2;//storing the new size in the first element of the list
	for(int i=1;i<Larr[0];i++)
	{
		newList[i]=Larr[i];//copying the elements of the list
	}
	for(int i=Larr[0];i<newList[0];i++)
	{
		newList[i]=-1;
	}
	Larr=newList;
	return Larr;//returning the new list of double the size and thus storing it in original
	
}
