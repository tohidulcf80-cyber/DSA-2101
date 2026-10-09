#include<stdio.h>
int main(){ 
  int arr[5]= { 10 ,20, 30, 40, 50};
 int length = 5;
 int position = 5;
 int Value = 25;
  for (int i = length; i > position; i--){
    arr[i] = arr[ i - 1];
  }
  arr[position ] = Value;
  length++;
  for(int i = 0; i<length ; i++){
  printf("%d ", arr[i]);
  }

return 0;
}
