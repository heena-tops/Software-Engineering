//Array and Function relation

#include<stdio.h>

void sum(int num[5])
{
    int add=0;
    for(int i=0;i<5;i++)
    {
        add+=num[i];
    }
    
    printf("\nAddition of all elements : %d",add);
}


int main()
{
    
    int a[5];
    
    for(int i=0;i<5;i++)
    {
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }
    
    sum(a);
    
    return 0;
}
