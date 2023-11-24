/*
	Array : 
	
		"A Variable Of Same type of diff Data elements"
		
		Array index starts from zero

	Syntax : data_type arr_name[size];
	
	>>Array initilization
		int arr[5]={12,23,43,54,65}; 
	
	>>Array Declaration
	
		int arr[20];

*/

#include<stdio.h>

int main()
{
	int arr[5];
	int i;

	//to take i/p
	for(i=0;i<5;i++)
	{
		printf("Enter num : ");
		scanf("%d",&arr[i]);	
	}	
	
	// to print
	printf("\n\nYour Array >>>>>>>>>>>>>\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);	
	}
	return 0;
}








