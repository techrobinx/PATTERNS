//dimond
/*
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/
#include <stdio.h>

int main()
{  
    int i, j, k, n = 1, number;
    printf("Enter number of rows: \n");
    scanf("%d", &number);
    n = number - 1;
    for (i = 1; i <= number; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf(" ");
        }
        n--;
        for (k = 1; k <= 2 * i - 1; k++)
        {
            if(k==1||k==2*i-1){
                printf("*");
        }
            else{
            printf(" ");

          }
        }
        printf("\n");
    }
    n = 1;
    for (i = 1; i <= number - 1; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf(" ");
        }
        n++;
        for (k = 1; k <= 2 * (number - i) - 1; k++)
        {   if(k==1||k==2*(number-i)-1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}