//function : with return type w/o parameters 

#include<stdio.h>

//funciton to make addition

int add(int n1, int n2) // x & y are formal parameters
{	
	return n1+n2;
}

int main()
{
	printf("%d\n",add(12,4));	
	printf("%d\n",add(16,7));
	printf("%d",add(5,4));
	
	return 0;
}

