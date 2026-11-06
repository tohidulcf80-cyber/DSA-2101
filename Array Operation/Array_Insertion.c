
#include<stdio.h>

int main()
{
  int arr[10] = {10, 20, 30, 40, 50};
   int length = 5; int pos =0;int Value;

 printf("Enter first index Value: ");
  scanf("%d", &Value);

for(int i =length; i >pos; i--){
   arr[i]= arr[i-1];
    }

  arr[pos]= Value;
   length++;

  printf("After first insertion: ");
   for(int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
    }


    int lastValue;
  printf("\nEnter last index Value: ");
   scanf("%d", &lastValue);

   arr[length] = lastValue;
    length++;

  printf("After last insertion: ");
  for(int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
    }

 return 0;
}
