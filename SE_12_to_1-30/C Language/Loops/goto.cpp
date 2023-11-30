#include<stdio.h>

int main()
{	
	int i=0;
	
	my_tag:
	for(;i<10;i++)
	{
		
		if(i==5)
		{
			i++;
			goto my_tag; // move prog to loop again
		}
		printf("%d\n",i);
	}
	
	
	return 0;
}
