#include<stdio.h>

int main()
{
	
	int arr[5];  // {12,35,4,67,3}
	int i=0,x,inner,temp=0;
	
	for(;i<5;i++)
	{
		printf("Enter : ");
		scanf("%d",&arr[i]);
	}
	
	//sorting logic
	
	for(x=0;x<5;x++)
	{
		for(inner=x+1;inner<5;inner++)
		{
			if(arr[x]>arr[inner])
			{
				temp=arr[x];
				arr[x]=arr[inner];
				arr[inner]=temp;
			}
		}
	}
	
	printf("\n\n===========result ==============\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d \n",arr[i]);
	}
	
	return 0;
}
