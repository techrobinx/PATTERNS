// left arrow star pattern
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