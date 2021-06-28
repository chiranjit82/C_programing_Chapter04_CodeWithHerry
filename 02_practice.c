#include<stdio.h>

int main() 
{
    int i;
    printf("*****Multplication table of 10 *****\n\n");
    for (i = 10; i; i--)
    {
        printf("10 * %d = %d \n", i, i*10);
    }
    
    return 0;
}