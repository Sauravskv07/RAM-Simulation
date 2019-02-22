#include "freevar.h"

int* push(int arr[],int index)
{
	int prevfree=freevar;
	arr[index+1]=prevfree;
	freevar=index;
	return arr;
}
