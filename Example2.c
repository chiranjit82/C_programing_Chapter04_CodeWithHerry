#include<stdio.h>

int main() 
{
    int i;
    int n;
    printf("Enter the value: \n");
    scanf("%d", &n);
    for (i = n; i; i--)
    {
        printf("The number is %d \n", i);
    }
    
    return 0;
}