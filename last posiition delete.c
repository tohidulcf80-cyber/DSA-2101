#include<stdio.h>
int main(){
  int arr[10] = {10, 20, 30, 40, 50 };
  int length = 5;
  int position = 4;
  for(int i = position; i<length-1; i++){

    arr[i] = arr[i+1];
  }
  length--;
  for(int i = 0; i<length ; i++){
    printf("%d ", arr[i]);
    
  }
  
}
