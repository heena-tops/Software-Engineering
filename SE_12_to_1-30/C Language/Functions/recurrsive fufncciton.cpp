#include<stdio.h>

int sum(int x)
{
	if(x<=0)
	{
		return 0;
	}
	else
	{
		//recursion call of function
		return x+sum(x-1);
	}
}

int main()
{
	
	int num;
	
	printf("Enter number to find factorial : ");
	scanf("%d",&num);
	
	printf("sum is : %d",sum(num));
	
	return 0;
}
