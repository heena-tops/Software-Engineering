/*
	While loop : Entry control loop
	
	Execution control loop 
	
	Syntax : 
	initilization;
	while(condition)
	{
		//code...
		updation;
	}

*/

#include<stdio.h>

int main()
{
	int num;
	bool status=true;
	char ch;
	
	while(status)
	{
		printf("Enter num : ");
		scanf("%d",&num);
		
		
		fflush(stdin);
		printf("Do You want to continue ?['y/n'] : ");
		scanf("%c",&ch);
		
		if(ch=='y')
		{
			status=true;
		}
		else
		{
			status=false;
		}
		
	}
	
	return 0;
}








