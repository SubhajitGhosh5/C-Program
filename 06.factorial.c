// GCD of two number given by user
#include <stdio.h>
int main()
{
    int a,b,i,gcd;
    printf("Enter the 1st number -> ");
    scanf("%d",&a);
    printf("Enter the 2nd number -> ");
    scanf("%d",&b);
    for(i=1;i<=a;i++)
    if(a%i==0 && b%i==0)
    gcd=i;
    {
        printf("GCD is => %d",gcd);
    }    
    return 0;
}
