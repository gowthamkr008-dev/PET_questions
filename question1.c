#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
Enter a string : ab123cde321klsn542jfn090
2 2 3 2 1 1 0 0 0 1 

*/


int main()
{
  char str[100];
  printf("Enter a string : ");
  scanf("%s",str);
  
  int *arr = calloc(10,sizeof(int));
  if(arr == NULL){
    return -1;
  }

  int i =0;
  while(str[i] != '\0'){
    if(isdigit(str[i])){
      arr[str[i]-'0']++;
    }
    i++;
  }

  for(i = 0;i <10;i++){
    printf("%d ",arr[i]);
  }

  free(arr);
    return 0;
}