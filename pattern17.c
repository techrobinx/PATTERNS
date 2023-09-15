// left arrow star pattern

// nter the number of row :
// 5
// *****
// ****
// ***
// **
// *
// *
// **
// ***
// ****
// *****
#include<stdio.h>

int main(){
    int row , i ,j ;
    printf("enter the number of row :\n");
    scanf("%d",&row);

    for ( i = 0; i < row; i++)
    {
        for(j=row; j>i; j--){
            printf("*");

        }
        printf("\n");

    }
    for ( i = 0; i < row; i++)
    {
        for(j=0; j<=i; j++){
            printf("*");

        }
        printf("\n");
        
    }
    
    return 0;
}   