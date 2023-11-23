#include<stdio.h>

int main()
{
	char x;
	
	printf("Enter character : ");
	scanf("%c",&x);
	
	switch(x)
	{
		case 'a':
			case 'u':
				printf("alphabet is A or U");
				break;
		case 'b':
			printf("alphabet is B");
			break;
		case 'c':
			printf("alphabet is C");
			break;
		default:
			printf("Invalid Input !!!");
			break;
	}
	
	return 0;
}
