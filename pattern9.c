

// 0
// 01
// 012
// 0123
// 01234
// 012345
// 0123456
// 01234567
// 012345678


#include<stdio.h>


int main(){
     int n;
    int i, j ;
    printf("enter the number of the row\n");
    scanf("%d",&n);
    // n=5;
for(i = 0 ; i <n*2;i ++){
    for(j= 0 ;j<i;j++){
        printf("%d",j);

    }
    printf("\n");
}
   return 0;
}   