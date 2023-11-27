#include<stdio.h>

int main()
{
	
	int m1[2][2],m2[2][2],m3[2][2];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element arr[%d][%d] : ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("\n\n>>>>>>>>>>>>>>Matrix : 1>>>>>>>>>>>>>>>\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element arr[%d][%d] : ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	
	printf("\n\n>>>>>>>>>>>>>Matrix : 2>>>>>>>>>>>>>>>>\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n>>>>>>>>>>>>>Matrix : Result>>>>>>>>>>>>>>>>\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}	
	
	return 0;
}










