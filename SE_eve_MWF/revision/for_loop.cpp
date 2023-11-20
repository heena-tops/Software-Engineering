#include<stdio.h>

int main()
{
	//loops in C Language
	/* 
	
		1. for loop: Entry control
		
		Syntax : 
			for(initialization,codition,updation)
			{
				//code...
			}
		
		2. while loop: Entry Control
		3. do while loop: Exit Control
	
	*/
	
	int x,container=0,num;
	
	for(x=1;x<=10;x++)
	{
		printf("Enter num %d : ",x);
		scanf("%d",&num); //20
		
		container+=num; // container = container + num	//container=9
		//29
	}	
	
	
	
	return 0;
}
