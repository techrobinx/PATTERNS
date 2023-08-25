
// Enter the number of row 
// 10
//   ****      ****
//  ******    ******
// ********  ********
// *******************
//  *****************
//   ***************
//    *************
//     ***********
//      *********
//       *******
//        *****
//         ***
//          *




#include <stdio.h>

int main()
{
    int row, space, i, j;
    printf("Enter the number of row \n");
    scanf("%d", &row);
    row = row - 1;
    for (i = row / 2; i <= row; i += 2)
    {

        for (j = 1; j < row - i; j += 2)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        for (j = 0; j <= row - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (i = row; i >= 0; i--)
    {
        for (space = row; space > i; space--)
        {
            printf(" ");
        }
        for (j = 0; j <= i * 2; j++)
        {

            printf("*");
        }
        printf("\n");
    }

    return 0;
}
