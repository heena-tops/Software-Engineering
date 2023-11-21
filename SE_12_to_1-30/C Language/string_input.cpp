//string input

#include<stdio.h>

int main()
{
	char my_name[100]="Hello world";
	char str1[50];
	
	printf("Static string value : %s \n\n",my_name);
	
	//take input from user
	
	printf("Enter string : ");
//	scanf("%s",str1);
	gets(str1); // use to scan multiple lines
	
	printf("Your string : %s",str1);
	
	return 0;
}
