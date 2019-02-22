#include <stdio.h>
#include "doubleList.h"
// This code will return an array containing of the starting addresses

int* createList(int Larr[])//Larr[] is the array containging the starting index of the individual list 
{
	//first element of Larr store the number of the element in Larr
	//second element of the list store the index where i can store the first address of the new list.
	Larr[1]++;
	if(Larr[0]==Larr[1]+1)
	{	
		//printf("inside if of createList");
		Larr=doubleList(Larr);
	}
	return Larr;
}
