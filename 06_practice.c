#include<stdio.h>

int main() 
{
    int i, n, sum = 0;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of (1 to %d) is %d \n", n, sum);
    int j = 1, c, add = 0;
    do
    {
        add += j;
        j++;
    } while (j <= n);
    printf("The adding of (1 to %d) is %d \n", n, add);
    return 0;
}