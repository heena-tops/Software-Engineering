//Nested Loops : 

#include<stdio.h>

int main()
{
	int i,x;
	
	//outer loop
	for(x=0;x<3;x++)
	{
		//inner loop
		for(i=0;i<3;i++)
		{
			if(x==1 && i==1)
			{
				printf(" $ ");
			}
			else
			{
				printf(" * ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
