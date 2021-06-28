#include<stdio.h>

int main() 
{
    int i = 2, n, prime = 0;
    printf("Enter the number: \n");
    scanf("%d", &n);
    while (i < n)
    {
       if(n%i == 0){
           prime = 1;
           break;
       }
       i++;
    }
    if(prime == 0){
        printf("%d is prime number. \n", n);
    }
    else {
        printf("%d is not a prime number. \n", n);
    }
    return 0;
}