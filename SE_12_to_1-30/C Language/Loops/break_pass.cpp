#include<stdio.h>

int main()
{
	/*
	
	Jumping statements : break, continue, goto
	
	help to move program execution from one to another 
	
	*/
	
	int i;
	
	for(i=0;i<10;i++)
	{
		if(i==5)
		{
			continue;
		}
		
		printf("%d\n",i);
	}
	
	
	return 0;
}
