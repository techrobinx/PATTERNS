#include<stdio.h>

int main(){
    
    int s,n,j,i,bg,ed;
    scanf("%d", &n);
        s= n+(n-1);
    bg=0;
    ed= s-1;
    int arr[s][s];
  	// Complete the code to print the pattern.
      while (n!= 0) {
      for (i=bg; i<=ed;i++ ) {
      for (j=bg; j<=ed;j++ ) {
        if(i==bg||i==ed||j==bg||j==ed){
            arr[i][j]=n;
            
        }
      }
      }
      bg++;
      n--;
      ed--;
      
      }
      
      for (i=0; i<s;i++ ) {
      for (j=0; j<s;j++ ) {
      printf("%d ",arr[i][j]);
      
      }
      printf("\n");
      
      }
    return 0;
}   