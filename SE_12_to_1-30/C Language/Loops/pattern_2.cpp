#include<stdio.h>

int main()
{
	
	int i,x,y;
	
	//out for loop
	for(x=1;x<=5;x++)
	{
		//inner for loop for space
		for(i=1;i<=(5-x);i++)
		{
			printf(" ");
		}
		
		//inner loop for star
		for(y=x;y<=(2*(x-1));y++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
