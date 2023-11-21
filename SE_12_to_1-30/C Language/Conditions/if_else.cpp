//if...else

/* 
Syntax : 

	if(condition1)
	{
		//code1..
	}
	else if(codnition2)
	{
		//code....
	}
	else
	{
		//code2...
	}
*/
#include<stdio.h>

int main()
{
	
	int a;
	
	printf("Enter Your num : ");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("+ve int");
	}
	else if(a==0)
	{
		printf("zero");
	}
	else
	{
		printf("-ve int");
	}
	
	return 0;
}










