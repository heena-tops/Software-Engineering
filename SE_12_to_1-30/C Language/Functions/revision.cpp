//Funciton : 

#include<stdio.h>

char test(char chh)
{
	if(chh=='A'||chh=='E')
	{
		return chh;
	}
	else
	{
		return chh='0';
	}
}

int main()
{
	char ch;
	
	printf("enter character : ");
	scanf("%c",&ch);
	
	printf("returned character : %c\n\n",test(ch));
	
	printf("done");
	
	return 0;
}
