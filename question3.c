#include <stdio.h>
/*
 n = 3
* 
* * 
* * * 
* * 
* 

*/
int main(){
  int n;
  scanf("%d",&n);

  for(int i =0;i<=n;i++){
    for(int j =0;j < i;j++){
      printf("* ");
    }
    if(i!= 0){
      printf("\n");
    }
  }
  for(int i =n-1;i>=0;i--){
    for(int j =0;j < i;j++){
      printf("* ");
    }
    if(i!= 0){
      printf("\n");
    }
  }


}