// mirrored Rhombus star pattern
// Enter the number of row:
// 5
//  * * * * * 
//   *       * 
//    *       *
//     *       *
//      * * * * *



#include<stdio.h>
int main(){
    int row , i ,j;
    printf("Enter the number of row:\n");
    scanf("%d",&row);
    for(i=0;i<row; i++){
        for(j=0; j<=i; j++){
            printf(" ");

        }
        for(int k=0; k<row; k++){
            if(k==0||k==row-1||i==0||i==row-1){
            printf("* ");

            }
            else{
                printf("  ");
            }
            // printf("%d",k);
        }
        printf("\n");

    }
    return 0;
}   