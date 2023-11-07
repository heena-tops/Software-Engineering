// Funciton : without return_type & without parameter


#include<stdio.h>

//Global Variable : which scope can be throuout the programe
int num=90;


// 1 . Funciton Declaration

void my_function();

int main()
{
	
	int a=23; // local var : which scope is limited to a function only
	
	printf("Local Value in main : %d\n\n",a);
	
	printf("Global value in main function : %d\n\n",num);
	
	//3. Funciton Calling
	my_function();
	
	return 0;
}

// 2. Funciton Defination
void my_function()
{
	printf("Global Value in my function : %d",num);
}
