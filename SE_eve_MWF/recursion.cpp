#include <stdio.h>

int main()
{
	char ch;
    bool status=true;
   
    do
    {
        printf("HEy I'm here \n");
        
        printf("Wanna continue ? ['y/n'] : ");
        scanf("%d",&ch);
        
        if(ch=='y' || ch=='Y')
        {
            status=true;
        }
        else
        {
            status=false;
        }
        
    }while(status);
    

    return 0;
}
