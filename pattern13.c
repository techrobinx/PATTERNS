/*
    *
   * *
  *   *
 *     *
*********
*/
#include<stdio.h>

int main(){
    int row,space, i, j ;
    printf("Enter the number of row \n");
    scanf("%d", &row);
    row=row-1;
    for ( i = 0; i <=row; i++)
    {
        for ( space = row; space>i; space--)
        {
            printf(" ");
        }
        for(j=0; j <=i*2; j++){
        
         
            printf("*");

          

        }
        printf("\n");
    }
       
    return 0;
}    
  