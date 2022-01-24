// Factorial of a number entered by user
#include <stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("The factorial -> %d",fact);
    return 0;
}
