#include<stdio.h>

int main()
{
	bool status=true;
	int num;
	char ch;
	
	while(status)
	{
		printf("Enter Number : ");
		scanf("%d",&num);
		
		if(num%2==0)
		{
			printf("Even\n");
		}
		else
		{
			printf("Odd\n");
		}
		
		fflush(stdin);
		printf("Do You want to continue ? ['y/n'] : ");
		scanf("%c",&ch);
		if(ch=='y' || ch=='Y')
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
