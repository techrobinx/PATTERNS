#include<stdio.h>

int main(){
    int i, j , n ;
    printf("enter the number of row\n");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for( int j =0;j<i; j++){
            printf("*");

        }
        printf("\n");
        
    }
    for(i =n; i>0; i--){
        for(j= 0; j<i; j++){
            printf("*");

        }
        printf("\n");

    }
    return 0;
}   