#include<stdio.h>

int main()
{
	int a=10,b=20;
	
	printf("value A before : %d \n",a);
	printf("value B before : %d \n",b);
	
	b = b+10; //b=30,a=10
	a++; //a=11,b=30
	b--; //b=29, a=11
	a=--b; // b=28 ,a=28
	b=++a;	//a=29, b=29
	 
	printf("value A after : %d \n",a);
	printf("value B after : %d \n",b);

	
	
	return 0;
}
