/*

	switch case : use for specific conditions
	
	Syntax : 
	
	
	switch(var){
	
		case 1:
			code..
			break;
		case 2:
			code..
			break;
		default:
			code...
			break;
	}

*/
#include<stdio.h>

int main()
{
	char ch;
	
	printf("Enter any alphabet : ");
	scanf("%c",&ch);
	
	switch(ch){
		
		case 'a':
			case 'A':
				case 'E':
					case 'e':
						case 'i':
							case 'I':
								printf("Vowels");
								break;
		default:
			printf("consonants");
			break;
	}
	
	return 0;
}



































