#include<stdio.h>

int main()
{
	int arr[5];
	int i;	
	
	//loop to take input in array
	for(i=0;i<5;i++)
	{
		printf("Enter element : ");
		scanf("%d",&arr[i]);	
	}	
	
	
	printf("\n================Array=================\n");
	//loop to show input in array
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);	
	}	
	
	return 0;
}
