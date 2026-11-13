#include <stdio.h>
/*
12 binary representation 1100

at the end 2 zero count number of zero 2 zero there is even so return 1 true

number : 12
binary : 1100
result : true



at the end 2 zero count number of zero 2 zero there is even so return 1 true
number : 4
binary : 100
result : true



at the end 3 zero count number of zero 3 zero there is odd so return 0 false

number : 8
binary : 1000
result : false
*/


int isendoddoreven(int num){
  int count = 0;
  for(int i =0;i < 32;i++){
    if( (num >> i) & 1 ){
      break;
    }
    count++;
  }
  if(count % 2 == 0){
    return 1;
  }else{
    return 0;
  }
}
int main(){
  int num;
  scanf("%d",&num);
  printf("number : %d\nbinary : %b\nresult : %s\n",num,num,isendoddoreven(num) ? "true" : "false");
}