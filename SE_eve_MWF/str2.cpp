//string in C : collection of characters / array of characters terminated with null character '\0'

#include<stdio.h>

int main()
{
    
    char str2[100]; // initialization
    int i;
    
    printf("Enter String : ");
    gets(str2); // scna multi line String
    
    puts(str2); // print multi line string
    
    for(i=0;str2[i]!='\0';i++)
    {
        printf("%c\n",str2[i]);
    }
    
    return 0;
}
