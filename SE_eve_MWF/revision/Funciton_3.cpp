//Funciton : w/o return type & with parameters
#include<stdio.h>

//funciton declaration & Defination
void my_function(int num) //formal parameters
{
	int add;
	if(num%2==0)
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
	my_function(num); // actual parameters
	
	return 0;
}
