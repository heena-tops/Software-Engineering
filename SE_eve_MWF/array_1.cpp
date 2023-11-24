/*
	Array : 
	
		"A Variable Of Same type of diff Data elements"
		
		Array index starts from zero

	Syntax : data_type arr_name[size];
	
	>>Array initilization
		int arr[5]={12,23,43,54,65}; 
	
	>>Array Declaration
	
		int arr[20];

*/

#include<stdio.h>

int main()
{
	float arr[5]={1.2,3.343,4.54,5.4,745.6};

	printf("Address : %u\n\n",&arr);
	printf("first = %f\n",arr[0]);
	printf("first = %u\n\n",&arr[0]);
	
	printf("second = %f\n",arr[1]);
	printf("second = %u",&arr[1]);
	
	return 0;
}








