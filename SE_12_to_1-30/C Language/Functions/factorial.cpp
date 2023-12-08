//Function : 

#include<stdio.h>

int fact(int nx)
{
	int f=1;
	for(int i=1;i<=nx;i++)
	{
		f*=i;
	}
	
	return f;
}

int main()
{
	
	int num,val;
	
	printf("Enter num : ");
	scanf("%d",&num);
	
	val=fact(num);
	
	printf("\nFactorial is : %d",val);
	
	return 0;
}
