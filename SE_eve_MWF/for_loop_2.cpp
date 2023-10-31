#include<stdio.h>

int main()
{
	int i,num,sum=0;
	
	for(i=1;i<=10;i++)
	{
		printf("Enter num : ");
		scanf("%d",&num);
		sum+=num; //sum=sum+num
	}
	
	printf("Total is : %d",sum);
	
	return 0;
}
