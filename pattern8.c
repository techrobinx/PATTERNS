/*
         *
        ***
       *****
      *******
     *********
    *         *
   ***       ***
  *****     *****
 *******   *******
********* *********
*/
#include <stdio.h>

int main(){
    int row, space, i, j;
    printf("Enter the number of row \n");
    scanf("%d", &row);
    row = row - 1;
    int n = row;
    for (i = 0; i <= row; i++)
    {
        for (space = row * 2; space >= i; space--)
        {
            printf(" ");
        }
        for (j = 0; j <= i * 2; j++)
        {

            printf("*");
        }

        printf("\n");
    }
    for (i = 0; i <= row; i++)
    {
        for (space = row; space > i; space--)
        {
            printf(" ");
        }
        for (j = 0; j <= i * 2; j++)
        {

            printf("*");
        }
        for (j = 0; j <= n * 2; j++)
        {

            printf(" ");
        }
        for (j = 0; j <= i * 2; j++)
        {
            printf("*");
        }
        n--;
        printf("\n");
    }

    return 0;
}
