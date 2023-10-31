//jumping statements 

/*

	help to move programe's execution from one stage to another
	these are mainly used in looping concepts only

	break : it will stop the iteration or break the iteration
	continue : it will skip the iteration and continue from the next
	goto : move from ne block to another in a programe
*/
#include<stdio.h>

int main()
{

	int i;
	
	for(i=1;i<=10;i++)
	{
		if(i==3)
		{
			continue;
		}
		else if(i==6){
			break;
		}
		else
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}




