//function : w/o return type with parameters 

#include<stdio.h>

//funciton to make addition

void add(int x, int y) // x & y are formal parameters
{
	printf("\nAddition is : %d",x+y);
}

int main()
{
	
	int a,b;
	
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	
	add(a,b); // here a & b are actual parameters
	
	return 0;
}

