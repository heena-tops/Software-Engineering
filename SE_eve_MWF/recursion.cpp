//Funciton : Recursive Function

/*
	Recursion : A process in which it get call itself again & again
	
	Recursive Funciton: A Funciton that call itself agian and again 
*/

#include<stdio.h>

int fact(int x) //x=5
{
	if(x>=1)
	{
		return x*fact(x-1); 
		/*
			5*4*3*2*1*1
		
		*/
	}
	else
	{
		return 1;
	}
	
}

int main()
{
	int num;
	
	printf("Enter num : ");
	scanf("%d",&num);
	
	printf("Factorial of %d is : %d",num,fact(num));
	
	return 0;
}

/*

	TASK : 1 : take num from user & find addition of all the natural numbers uptop that num (use recursion)
	
		eg : Enter num : 10
			Sum of all natural num : 55
			
			
	TASK : 2: print 10 to 1 using recursion


*/
