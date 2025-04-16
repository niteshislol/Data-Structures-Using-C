#include <iostream>
using namespace std;

//Code for Traversal
void display(int arr[],int n){
for(int i=0;i<n;i++){
  cout<<arr[i];
  cout<<endl;

}
}
int sortedinsertion(int arr[], int arr_size , int element , int capacity,int index){
  //Code for Insertion
  if(arr_size>=capacity){
    return -1;
  }
  for(int i=arr_size-1;i>=index;i--){
arr[i+1] = arr[i];
  }
  arr[index] = element;
  return 1;
}
int main() {
  int arr[100]={1,2,33,78 };
  int arr_size = 4;
  display(arr,4);
  int element = 45,index =3;
  sortedinsertion(arr,arr_size,element,100 ,index);
  arr_size+=1;
  display(arr,arr_size);
   return 0;
}