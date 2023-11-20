#include<stdio.h>

int main()
{
	/* 
	
	Do while loop : Exit cointrol loop
	
	Syntax:
	do{
		//code..;
		//updation;
	}while(codnition);
	
	*/
	
	int num=1;
	
	do{
		printf("%d\n",num);
		num++;
	}while(num<=10);
	
	//even if the get failed but still do..while will execute once even
	
	return 0;
}
