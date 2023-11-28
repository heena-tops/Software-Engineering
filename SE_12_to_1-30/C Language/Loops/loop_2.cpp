#include<stdio.h>

int main()
{
	
	int i,num=0,total=0,o_count=0,e_count=0;
	
	for(i=0;i<10;i++)
	{
		printf("Enter num : ");
		scanf("%d",&num);
		if(num%2==0)
		{
			e_count++;
		}
		else
		{
			o_count++;
		}
		
		total+=num;		
	}
	
	printf("\nTotal : %d\n",total);
	printf("\nTotal Even: %d\n",e_count);
	printf("\nTotal Odd: %d\n",o_count);
	
	return 0;
}
