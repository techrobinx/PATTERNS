#include<stdio.h>

int main(){
    
    int row =4, i,j ,k, s;
    printf("Enter the number of row \n");
    scanf("%d", &row);
    printf("-------------Butterfly star pattern---------------\n");
    printf("\n");

    int space= row *2;

     for (i = 0; i < row; i++)
    {

        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        for(s=space; s>0;s--){
            printf("  ");
        }
        space=space-2;
        for(k=0;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
   
    for (i = row; i >= 0; i--)
    {
        for (j = i; j >= 0; j--)
        {
            printf("* ");
        }

        for(s=0;s<space;s++){
            printf("  ");
        }
        space=space+2;
        for(k=i; k>=0;k--){
            printf("* ");

        }

        printf("\n");
    }
    return 0;
}   