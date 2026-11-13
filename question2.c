#include <stdio.h>
/*
Enter the size of array : 5
1 2 3 4 5 
minimum number of sorting : 0



Enter the size of array : 5
5 4 3 2 1 
minimum number of sorting : 4
*/
int main(){
  int size;
  printf("Enter the size of array : ");
  scanf("%d",&size);
  int arr[size];
  for(int i =0;i <size ; i++){
    scanf("%d",&arr[i]);
  }

  int count = 0;
  for(int i =0;i<size-1;i++){
    if(arr[i]> arr[i+1]){
      count++;
    }
  }
  printf("minimum number of sorting : %d",count);

  return 0;
}