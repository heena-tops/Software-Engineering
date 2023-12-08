#include<stdio.h>

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

float div(int a, int b)
{
	return a/b;
}

int mod(int a, int b)
{
	return a%b;
}


int main()
{
	int choice,n1,n2;
	bool status=true;
	char ch;
	
	while(status)
	{
		printf("===========Choice Board===========\n");
	    printf("1. Addition\n");
	    printf("2. Subtraction\n");
	    printf("3. Multiplication\n");
	    printf("4. Division\n");
	    printf("5. Modulo\n");
	    printf("6. Exit\n");
	    
	    printf("Enter choice from given : ");
	    scanf("%d",&choice);
	    
	    if(choice==1)
	    {
	    	printf("Enter two numbers : ");
	    	scanf("%d %d",&n1,&n2);
	    	printf("Addition is : %d",add(n1,n2));
		}
		else if(choice==2)
	    {
	    	printf("Enter two numbers : ");
	    	scanf("%d %d",&n1,&n2);
	    	printf("Sub is : %d",sub(n1,n2));
		}
		else if(choice==3)
	    {
	    	printf("Enter two numbers : ");
	    	scanf("%d %d",&n1,&n2);
	    	printf("Mul is : %d",mul(n1,n2));
		}
		else if(choice==4)
	    {
	    	printf("Enter two numbers : ");
	    	scanf("%d %d",&n1,&n2);
	    	printf("div is : %d",div(n1,n2));
		}
		else if(choice==5)
	    {
	    	printf("Enter two numbers : ");
	    	scanf("%d %d",&n1,&n2);
	    	printf("mod is : %d",mod(n1,n2));
		}
		else
	    {
	    	break;
		}
		
		fflush(stdin);
		printf("Do You Wanna Continue ? ['y/n'] : ");
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















