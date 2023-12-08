#include<stdio.h>

int main()
{
	int arr[5]={12,34,54,6,76};
	int i;
	
	printf("location of array : %u\n\n",&arr);	
	for(i=0;i<5;i++)
	{
		printf("location of firts array : %u\n\n",&arr[i]);
	}
	
	printf("%d",arr[2]);
	
	return 0;
}
