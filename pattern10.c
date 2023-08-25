/*
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****

*/
#include <stdio.h>
int main()
{
    int row, space, i, j;
    printf("Enter the number of row(Only for 1 to 9 rows) \n");
    scanf("%d", &row);
    row = row - 1;
    for (i = 0; i <= row; i++)
    {
        for (int k = 0; k < row; k++)
        {
            printf("*");
        }
        for (space = row; space > i; space--)
        {
            printf("*");
        }
        for (j = 0; j <= i * 2; j++)
        {
            if (j % 2 == 0)
            {
                printf("%d", i + 1);
            }
            else
            {
                printf("*");
            }
        }
        for (int k = 0; k < row; k++)
        {
            printf("*");
        }
        for (space = row; space > i; space--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
