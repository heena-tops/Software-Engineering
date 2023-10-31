#include<stdio.h>

int main()
{
	
	/*
	
		for(initilization;condition;update)
		{
			//code....
		}
	
	*/
	
	int i,num;
	
	printf("Enter num to find table : ");
	scanf("%d",&num);
	
	printf("Table of %d : \n",num);
	
	for(i=1;i<=10;i++)
	{
		printf("\n	%d * %d = %d",num,i,num*i);
	}
	
	return 0;
}







