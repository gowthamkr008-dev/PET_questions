#include <stdio.h>
/*
mat 1
1 2 3 
4 5 6 
7 8 9 
10 11 12

mat2
1 2 3 
4 5 6 
7 8 9 
10 11 12

1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 0
Missing number is 12

*/


int missingnumber(int complete[][3],int incomplete[][3]){
  for(int i = 0; i <4;i++){
    for(int j = 0; j < 3;j++){
      if(complete[i][j] != incomplete[i][j]){
        return complete[i][j];
      }
    }
  }
}
int main(){
  int mat1[4][3],mat2[4][3];
  for(int i =0;i<4;i++){
    for(int j =0;j<3;j++){
      scanf("%d",&mat1[i][j]);
    }
  }

   for(int i =0;i<4;i++){
    for(int j =0;j<3;j++){
      scanf("%d",&mat2[i][j]);
    }
  }

  printf("Missing number is %d\n",missingnumber(mat1,mat2));



  return 0;
}