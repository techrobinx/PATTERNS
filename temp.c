#include<stdio.h>

int main(){
    int row , space , i , j ;
   printf("Enter hte number of row\n");
   scanf("%d",&row);
     row= row-1;
     
   for (i = 0; i<row; i++){
    for (j=0; j<=i;j++){
        printf("* ");
    }
    printf("\n");

   }
   for(i = row; i>=0; i--){
    for(j=i; j>=0; j--){
        printf("* ");

    }
    printf("\n");

   }
    return 0;
}   