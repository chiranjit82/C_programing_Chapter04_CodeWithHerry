#include<stdio.h>

int main() 
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d \t", i+1);
    }
    printf("\n");
    for (i = 6; i; i--)
    {
        printf("%d \t", i);
    }
    
    
    return 0;
}