#include<stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int length = 5;int pos ;int Value;

   printf("Enter the Value: ");
   scanf("%d", &Value);
   
    for(int i= length; i> pos; i--){
        arr[i]= arr[i - 1];
    }
    arr[pos] = Value;
    length++;
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
}
