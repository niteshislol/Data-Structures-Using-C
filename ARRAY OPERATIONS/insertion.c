#include <stdio.h>
void display(int arr[], int n){
  for(int i=0; i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int IntInsertion( int arr[] , int size , int element , int capacity , int index ){
    if(size >= capacity){return -1;}
    for (int i = size -1 ; i >= index; i--)
    {
           arr[i+1] = arr [i];
     }
    arr[index]=element;
    // display(arr,size);

    return 1;
}
int main() {
    int arr[100] = {1,2,6,78};
    int size =4 , element = 45 , index = 3;
  //  display(arr,size);
    IntInsertion(arr , size , element , 100 , index);
  size +=1;
  display(arr,size);

  return 0;
}