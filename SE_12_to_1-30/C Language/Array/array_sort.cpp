#include<stdio.h>

int main()
{
	int arr[5]={12,4,54,23,46};
	int i,j,temp=0;
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("\n\n=========sorted array===========\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
