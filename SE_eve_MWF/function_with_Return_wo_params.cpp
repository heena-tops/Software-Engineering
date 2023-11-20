//function : with return type w/o parameters 

#include<stdio.h>

//funciton to make addition

int add() // x & y are formal parameters
{
	
	int n1,n2;
	
	printf("Enter two nums : ");
	scanf("%d %d",&n1,&n2);
	
	return n1+n2;
}

int main()
{
	
	printf("%d",add());
	
	return 0;
}

