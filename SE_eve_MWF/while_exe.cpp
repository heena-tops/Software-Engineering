#include<stdio.h>

int main()
{
	bool status=true;
	int num;
	char choice;
	
	while(status)
	{
		printf("Enter num to check is it even or odd ? : ");
		scanf("%d",&num);
		
		if(num%2==0)
		{
			printf("Even");
		}
		else
		{
			printf("Odd");
		}
		
		fflush(stdin);
		printf("\n\nDo You want to Continue or not ? ['y/n'] : ");
		scanf("%c",&choice);
		
		if(choice=='y')
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
