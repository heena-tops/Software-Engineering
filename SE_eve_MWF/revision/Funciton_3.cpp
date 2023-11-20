//Funciton : w/o return type & with parameters
#include<stdio.h>

//funciton declaration & Defination
void my_function(int x)
{
	if(x%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}

int main()
{
	int num;

	printf("Enter num : ");
	scanf("%d",&num);
	
	//Funciton Calling
	my_function(num);
	
	return 0;
}
