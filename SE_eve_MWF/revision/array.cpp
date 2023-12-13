#include<stdio.h>

int main()
{
	/*
		Array in C : A variable that can store multiple values of same data type
		
		Array declaration : 
		
		data_type array_name[size];
		
		Array initialization : 
		
		int myarray[5]={12,3,4,5,65};
		or
		int myarray[]={12,3,4,5,65};
		
		>>Types of Array:
		
		1-D array, 2-D array, 3-D array, multi-Dimentional, etc....
	*/
	
	// 2-D array
	
	int arr[2][2]={{12,43},{23,43}};
	
	int a2[2][2]={12,34,67,54};
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("element a[%d][%d]: %d\n",i,j,arr[i][j]);
		}
	}
	
	return 0;
}
