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
            printf("* ");

        }
        printf("\n");

    }
    return 0;
}   