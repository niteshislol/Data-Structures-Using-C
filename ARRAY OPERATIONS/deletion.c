#include <stdio.h>
void display(int arr[], int n){
  for(int i=0; i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int IntDeletion( int arr[] , int size , int index ){
    for (int i = index ; i < size; i++)
    {
           arr[i] = arr [i+1];
     }
    // arr[index]=element;
    // display(arr,size);

    return 1;
}
int main() {
    int arr[100] = {1,2,6,78 , 88};
    int size =5 , element = 45 , index = 0;
  //  display(arr,size);
    IntDeletion(arr , size , index);
  size -=1;
  display(arr,size);

  return 0;
}