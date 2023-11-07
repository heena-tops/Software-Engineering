//Dynamic prog

#include<stdio.h>

int main()
{
	int num1; //dynamic var
	
	printf("Enter num : ");
	scanf("%d",&num1); //affress of operatr : & 
	
	printf("Your value is : %d\n",num1);
	printf("Location of value 1 is : %d\n",&num1);
	
	return 0;
}
