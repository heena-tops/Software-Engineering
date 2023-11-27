#include<stdio.h>

int main()
{
	/*
	
		Types : 
		
		
		2-D, 3-D, muti-D
		
		Syntax : 
		//declaration
		dadta_type ar_name[row][col];
		
		//initilize 
		int arr[3][3]={12,23,34,5,465,65,65,76,87};
		
		int arr[3][3]={{12,43,54},{34,6,5},{86,54,4}};
		
	*/
	
	int arr[3][3]={12,23,34,5,465,65,65,76,87};
	int i,j;
	
	for(i=0;i<3;i++) // work for row elements
	{
		for(j=0;j<3;j++) //work for column elements
		{
			printf("%d \n",arr[i][j]);
		}
	}
	
	
	return 0;
}










