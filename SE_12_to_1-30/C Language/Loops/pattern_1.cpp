#include<stdio.h>

int main()
{
	
	int i,x;
	
	//out for loop
	for(x=1;x<=5;x++)
	{
		//inner for loop
		for(i=1;i<=x;i++)
		{
			if(i%2!=0)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
