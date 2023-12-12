#include<stdio.h>

int main()
{
	int arr[2][3];
	int i,j;
	
	//input from user
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	//show ouput
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("arr[%d][%d] = %d \n",i,j,arr[i][j]);
		}
	}
	
	return 0;
}
