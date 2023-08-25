
//  Enter the number the lines :
//  6
//  *              *  *  *  *  *  *
//  *              *
//  *              *
//  *              *
//  *              *
//  *  *  *  *  *  *  *  *  *  *  *
//                 *              *
//                 *              *
//                 *              *
//                 *              * 
//  *  *  *  *  *  *              *




#include<stdio.h>
int main(){
 char arr[100][100];
    int lines=0, row, column, i=0, j=0;
    printf( " Enter the number the lines :\n ");
    scanf("%d",&lines);
    row = (lines*2)-1;
    column= (lines*2)-1;
    for(i=0; i<row;i++){
        for(j=0; j<column;j++){
            if(i<(lines-1)&&j==0){
                arr[i][j]='*';
            }
            else if(j==(lines-1)){
                arr[i][j]='*';
            }
            else if(i==0&& j>(lines-1)){
                arr[i][j]='*';
            }
            else if(i==(lines-1)){
                arr[i][j]='*';
            }
            else if(i>(lines-1)&&j==(row-1)){
                arr[i][j]='*';
            }
            else if(i==row-1&&j<(lines-1)){
                arr[i][j]='*';
            }
            else {
                arr[i][j]= ' ';
            }
        }
    }
        for(i=0; i<row;i++){
        for(j=0; j<column;j++){
            printf(" %c ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}