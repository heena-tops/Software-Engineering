/*

	>> do..while loop :  exit control loop
	
	minimun time of execution in do..while loop is 1
	
	Syntax :
	
	do{
		//code..
		//updation..
	}while(condition);

*/


#include<stdio.h>

int main()
{

	int num=1;
	
	do{
		printf("%d\n",num);
		num++;
	}while(num<=0);
	
	//even if condition doesn't statisfied it'll run for atleast one  time
	
	return 0;
}









