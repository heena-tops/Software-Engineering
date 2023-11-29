//string in C : collection of characters / array of characters terminated with null character '\0'

#include<stdio.h>

int main()
{
    char str1[5]={'a','b',' ','.','c','\0'}; // initialization
    char str2[]="Hello world"; // initialization
    char str3[100]; // string declaration
    
    printf("Enter String : ");
    scanf("%s",str3);
    
    printf("%s",str3);
    
    return 0;
}
