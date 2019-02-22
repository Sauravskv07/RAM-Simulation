#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "freevar.h"
#include "pop.h"
#include "push.h"
#include "doubleList.h"
#include "createList.h"
#include "doubleMemory.h"
#include "delete.h"
#include "add.h"
#include "defragment.h"
#include "indexStart.h"
#include "prevFree.h"
#include "inFree.h"
#include "countInMemory.h"
#include "countInList.h"
#include "displayInMemory.h"
#include "displayInList.h"
#include "displayFree.h"

int main()
{
	int* Larr=(int*) malloc(sizeof(int)*6);// defining an array that can store 4 lists in the starting
	Larr[0]=6;
	Larr[1]=0;
	for(int i=2;i<6;i++)
	{
		Larr[i]=-1;
	}	
	int* arr=(int *)malloc(sizeof(int)*151);//defining an array that can store 50 nodes atleast
	arr[0]=151;
	for(int i=0;i<151;i++)
	{
		if(i%3==2)
			arr[i]=i+2;
	}
	arr[149]=-1;	

	//start of the switch case

	printf("Select an option:\n");
	printf("1.  Create a new list\n");
	printf("2.  Insert a new element in a given list in sorted order\n");
	printf("3.  Delete an element from a given list\n");
	printf("4.  Count total elements excluding free list\n");
	printf("5.  Count total elements of a list\n");
	printf("6.  Display all lists\n");
	printf("7.  Display free list\n");
	printf("8.  Perform defragmentation\n");
	printf("9.  Press 0 to exit\n");
	printf("Select an option: ");
	int choice;
	scanf("%d",&choice);
	while(choice!=0)
	{
	switch(choice)
		{
		case 1:{
			//Select an option: 1
			//The sequence number of the newly created list is: n
			//Enter key value to be inserted in the newly created list-n: here user inputs integer m
			//Program outputs “SUCCESS” or “FAILURE: MEMORY NOT AVAILABLE”.
		
			Larr=createList(Larr);
			printf("\nThe sequence number of the newly created list is: %d\n",Larr[1]);
			printf("Enter key value to be inserted in the newly created list- %d: ",Larr[1]);
			int KeyValue;
			scanf("%d",&KeyValue);
			arr=add(Larr[1],arr,Larr,KeyValue);
			printf("SUCCESS\n");
			
			break;
			}
		case 2:{
			//Select an option: 2
			//List you want to insert in: here user inputs list number n
			//Enter the key value: here user inputs integer m
			//Program outputs “SUCCESS” or “FAILURE: MEMORY NOT AVAILABLE”.
			
			int ListNumber,KeyValue;
			printf("List you want to insert in: ");
			scanf("%d",&ListNumber);
			printf("Enter the key value: ");
			scanf("%d",&KeyValue);
			printf("\n");
			if(ListNumber>Larr[1])
				{
				printf("\nThe List corresponding to the list Number doesnot exist\n");
				printf("FAILURE\n");
				}
			else
				{
				arr=add(ListNumber,arr,Larr,KeyValue);
				printf("SUCCESS\n");
				}
			break;
			}
		case 3:{
			//Select an option: 3
			//List you want to delete from: here user inputs list number n
			//Enter the key value: here user inputs integer m
			//Program outputs “SUCCESS” or “FAILURE: ELEMENT NOT THERE / LIST EMPTY”.

			int ListNumber,KeyValue;
			printf("List you want to delete from: ");
			scanf("%d",&ListNumber);
			printf("Enter the key value: ");
			scanf("%d",&KeyValue);
			printf("\n");
		
			arr=delete(ListNumber,arr,Larr,KeyValue);
			
			break;
			}
		case 4:{
			printf("Total number of nodes in all lists are %d\n",countInMemory(arr,Larr));	
			break;
			}
		case 5:{
			int ListNumber;
			printf("Enter the List Number: ");
			scanf("%d",&ListNumber);
			printf("\n");
			int count=countInList(ListNumber,arr,Larr);
			printf("Total number of nodes in list %d are %d.",ListNumber,count);
			break;
			}
		case 6:{
			displayInMemory(arr,Larr);
			break;}
		case 7:{
			displayFree(arr);
			break;}
		case 8:{
			arr=defragment(arr,Larr);
			break;
			}
		default:{
			printf("INVALID CHOICE\n");
			}
		}
	printf("\nSelect an option:\n");
	printf("1.  Create a new list\n");
	printf("2.  Insert a new element in a given list in sorted order\n");
	printf("3.  Delete an element from a given list\n");
	printf("4.  Count total elements excluding free list\n");
	printf("5.  Count total elements of a list\n");
	printf("6.  Display all lists\n");
	printf("7.  Display free list\n");
	printf("8.  Perform defragmentation\n");
	printf("9.  Press 0 to exit\n");
	printf("Select an option: ");
	scanf("%d",&choice);

	}
	printf("THANK YOU\n");

}

