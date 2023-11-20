#include<stdio.h>

int main()
{
	int a,b;
	float res=0;
	
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	
	res=a+b+10.10; // expression in C language
	
	printf("Result is : %f",res);
	
	return 0;
}
