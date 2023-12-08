#include<stdio.h>

int main()
{

    int num;
    bool status=true;
    char choice;
    
    while(status)
    {
        printf("Enter number : ");
        scanf("%d",&num);
        
        if(num%2==0)
        {
            printf("Even\n\n");
        }
        else
        {
            printf("Odd\n\n");
        }
        
        
        fflush(stdin);
        printf("Do wanna continue ? ['y/n'] : ");
        scanf("%c",&choice);
        
        if(choice=='y')
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
