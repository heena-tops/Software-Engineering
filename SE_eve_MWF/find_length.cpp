//string in C : collection of characters / array of characters terminated with null character '\0'

#include<stdio.h>

int main()
{
    
    char str2[100]; // initialization
    int i,length=0;
    
    printf("Enter String : ");
    gets(str2); // scna multi line String
    
    
    
    for(i=0;str2[i]!='\0';i++)
    {
        length++;
    }
    
    printf("\nLength of string : %d",length);
    
    return 0;
}
