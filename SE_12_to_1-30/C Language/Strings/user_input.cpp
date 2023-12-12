//user input in string

/*
	task 1 : 
		Take string from user & find 
		
		i/p:
		Enter string : Hello World
		
		o/p:
		Capital letters : 2
		Small letters : 8
		white space : 1
		
	task 2 : 
		Take string from user & find 
		
		i/p:
		Enter string : Hello3 World23 !
		
		o/p:
		Vowel Count : 3
		Consonant Count: 7
		Digit Count : 3
		white space : 1
		special character : 1
		
	task : 3: find character frequancy in a string 
		
		Enter string : hello 
		Enter Character : l
		
		o/p:
		frequanceee of character 'l' is : 2
		
	
	task : 4 : find frequance of each character in string 
	
		Enter string : Hello World
		
		H-1
		e-1
		l-3
		o-2
		W-1
		r-1
		d-1
		
	task : 5 : Check that the string is palindrome or not ?
	
	eg : 
	
	Enter string : naman
	
	IT's palindrome
	
	task : 6 : reverse string w/o using in-built Funciton
		
*/

#include<stdio.h>

int main()
{
	char str3[100];
	int i,counter=0;
	
	printf("Enter string : ");
	gets(str3); // to get mutiline string input from user
	
	puts(str3); // to print the multi line string
	
	for(i=0;str3[i]!='\0';i++)
	{
		printf("%c\n",str3[i]);
		counter++;
	}
	
	printf("Length of string : %d",counter);
	
	return 0;
}

