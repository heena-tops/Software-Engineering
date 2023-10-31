#include<stdio.h>

int main()
{
	
	int i=1;

	my_label:
	printf("\n===Hello===\n");
	
	for(;i<=10;i++)
	{
		if(i==5)
		{
			i++;
			goto my_label;
		}
		else
		{
			printf("\n%d\n",i);
		}
	}
	
	return 0;
}
