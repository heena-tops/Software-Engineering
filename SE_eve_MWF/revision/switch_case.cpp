#include<stdio.h>

int main()
{
	
	/*
	
		switch(exp)
		{
			case 1:
				code..
				break;
			case 2:
				code..
				break;
			default:
				code...
			
		}
	
	*/
	
	char ch;
	
	printf("Enter any character : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
			printf("Apple");
			break;
		case 'b':
			printf("Banana");
			break;
		default:
			printf("Invalid Input !!!!");
	}
	
	
	return 0;
}





