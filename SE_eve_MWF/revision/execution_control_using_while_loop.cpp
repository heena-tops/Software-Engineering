#include<stdio.h>

int main()
{
	int num;
	char choice;
	bool status=true;
	
	while(status)
	{
		printf("Enter number : ");
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
		printf("Do You want to continue ? :['y/n'] : ");
		scanf("%c",&choice);
		
		if(choice=='y' || choice=='Y')
		{
			status=true;
		}
		else
		{
			printf("\nThank You\n");
			status=false;
		}
	}
	
	return 0;
}
