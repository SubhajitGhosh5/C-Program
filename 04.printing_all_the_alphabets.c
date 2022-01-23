//printing all the alphabates
#include <stdio.h>
int main()
{
    char i;
    printf("Capital letter alphabets A to Z :");
    for(i='A';i<='Z';i++)
    {
        printf("%c\t",i);
    }
    printf("\nSmall letter alphabets a to z :");
    for(i='a';i<='z';i++)
    {
        printf("%c\t",i);
    }
    return 0;
}
