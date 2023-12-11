//Funciton : with return type without paprameter

#include<stdio.h>

//funciton declaration & Defination
int add() //here x & y are formral parameter
{
	int n1,n2;
	printf("Entetrr  two numbers : ");
	scanf("%d %d",&n1,&n2);
	return n1+n2;
}

int main()
{	
	printf("Number addition is : %d",add()); //here n1 & n2 are actual parameter
	
	return 0;
}

