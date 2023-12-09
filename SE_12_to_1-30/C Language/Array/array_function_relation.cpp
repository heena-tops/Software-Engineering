//Array and Funciton Relation

#include<stdio.h>

int add(int arr[])
{
	int sum=0,i;
	for(i=0;i<5;i++)
	{
		sum+=arr[i];	
	}
	
	return sum;
	
}

int main()
{
	int a[5],i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter element : ");
		scanf("%d",&a[i]);
	}
	
	printf("Addition of all array elements : %d",add(a));
	
	return 0;
}
