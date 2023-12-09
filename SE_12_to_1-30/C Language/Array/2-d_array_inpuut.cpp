#include<stdio.h>

int main()
{
	int a[2][2];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("\n=======2-D Array=========\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Element a[%d][%d]: %d\n",i,j,a[i][j]);
		}
	}
	
	return 0;
}
