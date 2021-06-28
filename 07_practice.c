#include<stdio.h>

int main() 
{
    int i, n = 8, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + (n * i);
    }
    printf("The sum is %d \n", sum);
    return 0;
}