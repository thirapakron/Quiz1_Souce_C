/*ถิรปกรณ์ สังขนานนท์  , reversenumber*/
#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i=n; i>=1; i--)
    {
        printf("%d,", i);
    }

    return 0;
}