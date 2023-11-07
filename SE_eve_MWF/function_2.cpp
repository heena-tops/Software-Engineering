// Function : without return_type & with parameter 

#include<stdio.h>

// 1 . Funciton Declaration

void avg(int a, int b, int c); // here a,b,c are formal paramater

int main()
{
	int m1,m2,m3;
	
	printf("Enter three values : ");
	scanf("%d %d %d",&m1,&m2,&m3);
	
	
	//Function Calling 
	avg(m1,m2,m3); // here m1,m2,m3 are actual parameters
	
	return 0;
}

// 2. Funciton Defination
void avg(int a, int b, int c)
{
	float avg_total=0;
	
	avg_total=(a+b+c)/3;
	
	printf("\n\n Avg is : %.3f\n\n",avg_total);
	
}

