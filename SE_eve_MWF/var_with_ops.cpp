#include<stdio.h>

int main()
{
	//var declaration
	int n1;
	
	printf("Enter number : ");
	scanf("%d",&n1);
	
	if(n1>0){
		printf("+ve num");
	}
	else if(n1==0){
		printf("nutural num");
	}
	else{
		printf("-ve num");
	}
	
	return 0;
}
