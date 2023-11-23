#include<stdio.h>

int main()
{
    bool status=true;
    char ch;
    
    while(status)
    {
        printf("Hey in loop\n");
        
        fflush(stdin);
        printf("Wanna continue ? ['y/n'] : ");
        scanf("%c",&ch);
        
        if(ch=='y' || ch=='Y')
        {
            status=true;
        }
        else
        {
            status=false;
        }
        
    }
    

    return 0;
}
