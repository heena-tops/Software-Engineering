/*
	
	switch case:
	
	Syntax :
	
	switch(exp)
	{
		case 1:
			//code..
			break;
		case 2:
			//code..
			break;
		....
		default:
			//code...		
	}

*/

#include<stdio.h>

int main()
{
	int x;
	
	printf("Enter num to find corresponding day : ");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		default:
			printf("Invalid Input !!!");
			break;
	}
	
	return 0;
}










