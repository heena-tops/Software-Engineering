#include<stdio.h>

int main()
{
	
	int i,j;
	
	//outer loop
	for(j=0;j<5;j++)
	{
		printf("\n");
		//inner loop
		for(i=0;i<5;i++)
		{
			printf(" * ");
		}
	}
	
	return 0;
}
