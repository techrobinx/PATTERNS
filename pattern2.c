/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********   
*/
#include <stdio.h>
int main()
{
    int i, j;
    int n;
    printf("enter the number of row....\n");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        printf("\n");
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
    }
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}