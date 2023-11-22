//Fucntoin : with return type & with parameters

#include<stdio.h>

//global declaration of a variable
int x=34;

void my_fun()
{
	
	printf("value of x : %d\n",x);
}

int main()
{
	int num;
	
	printf("Enter num : ");
	scanf("%d",&num);
	
	my_fun();
	
	printf("num from  funciton : %d",x);
	
	return 0;
}
