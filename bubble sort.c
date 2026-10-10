#include<stdio.h>
int main(){
 int arr[]={5,3,8,4,2};
  int n =5;
  int temp;

  for(int i = 0; i<n-1; i++){
    for( int j = 0; j < n-1-i; j++){
    
 if(arr[j]> arr[j+1]){
  temp = arr[j];
  arr[j] = arr[j+1];
  arr[j+1] = temp;
 
   }
  }
}
  printf("sorted Array: ");
  for(int i= 0; i<n; i++){
    printf("%d ", arr[i]);
  }
}