#include<stdio.h>

int main() 
{
    int i, n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    printf("*****Multplication table of %d *****\n\n", n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}