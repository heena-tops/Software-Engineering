#include<stdio.h>
#include<string.h>

int main()
{
	/*
	
		string is array of characters terminated with null character '\0'
		
		Syntax : char str_name[size];
		
	*/
	
	char str1[100];
	int i,len=0;
	
	printf("Enter string : ");
	gets(str1); // gets() : to scan multi line string
	
	len=strlen(str1);
	strrev(str1);
	
	printf("Length : %d",len);
	printf("reverse : %s",str1);
	
	return 0;
}
