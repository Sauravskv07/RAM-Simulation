#include <stdio.h>
#include "freevar.h"

// returns the index of the first free element
int pop(int* arr)
{
	int freeIndex=freevar;//allocating the first free index provided to us
	freevar=arr[freevar+1];//allocation of new free to the next free index
	//printf("free var in pop%d\n",freevar);
	return freeIndex;//returning the index of the memory free so that we can allocate the new object
}
