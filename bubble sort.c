#include<stdio.h>
int main(){
 int arr[]={7, 5, 8, 3, 9};
 int length=5;
 int temp;
 for(int i = 0; i< length-1; i++){
   for(int j =0 ; j< length-1-i; j++){
   if(arr[j]> arr[j+1]){

     temp = arr[j];
     arr[j] = arr[j+1];
     arr[j+1] = temp;

   }
   }
 }

printf("Sorted Array: ");
for(int i= 0; i< length ; i++){
    printf("%d ", arr[i]);
}

}