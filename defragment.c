#include <stdbool.h>
#include <stdio.h>
#include "inFree.h"
#include "prevFree.h"
#include "freevar.h"
#include "indexStart.h"
#include "push.h"
int* defragment(int* arr,int* Larr)
{
	int Filled=arr[0]-3;
	int Empty=1;
	int prevFree;
	while(Filled>Empty)
	{
		if(!isFree(Filled,arr))
			{
			if(isFree(Empty,arr))
				{
					prevFree=prevfree(Empty,arr);
					if(prevFree==-1)
					{
						freevar=arr[Empty+1];
						if(arr[Filled+2]!=-1)
							{
								arr[arr[Filled+2]+1]=Empty;
							}
						else
							{
							int indexStart=indexstart(Filled,Larr);
							Larr[indexStart]=Empty;
							}
						if(arr[Filled+1]!=-1)
							{
								arr[arr[Filled+1]+2]=Empty;
							}
						
						arr[Empty]=arr[Filled];
						arr[Empty+1]=arr[Filled+1];
						arr[Empty+2]=arr[Filled+2];
						push(arr,Filled);
					}
					else
					{
						arr[prevFree+1]=arr[Empty+1];
						if(arr[Filled+2]!=-1)
							{
								arr[arr[Filled+2]+1]=Empty;
							}
						else
							{
							int indexStart=indexstart(Filled,Larr);
							Larr[indexStart]=Empty;
							}
						if(arr[Filled+1]!=-1)
							{
								arr[arr[Filled+1]+2]=Empty;
							}
						arr[Empty]=arr[Filled];
						arr[Empty+1]=arr[Filled+1];
						arr[Empty+2]=arr[Filled+2];
						push(arr,Filled);
					}			
		
				}
			else
				{
				Empty+=3;
				}
			}
		else
			{
			Filled-=3;
			}
	}
	printf("SUCCESS\n");
	return arr;
}
