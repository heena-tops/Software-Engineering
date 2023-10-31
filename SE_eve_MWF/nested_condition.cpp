/* 
	Nested Conditions : 
		
*/	

#include<stdio.h>

int main()
{
	int m1,m2,m3;
	
	printf("Enter marks 1 : ");
	scanf("%d",&m1);
	
	if(m1>=40){
		printf("Enter marks 2 : ");
		scanf("%d",&m2);
		if(m2>=50){
			printf("Enter mrks of 3 : ");
			scanf("%d",&m3);
			if(m3>=60)
			{
				printf("PASS");
			}
			else{
				printf("FAIL");
			}
		}
		else{
			printf("FAIL");
		}
	}
	else
	{
		print("FAIL");
	}
	
	return 0;
}
