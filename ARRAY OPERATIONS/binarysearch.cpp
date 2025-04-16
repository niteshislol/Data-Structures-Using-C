#include <iostream>
using namespace std;
int binary(int arr[],int key,int size){
    int  start=0;
    int end = size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }else if(key<arr[mid]){
         mid = mid + 1;
        }else 
        mid = mid -1;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int key=4;
    int size=6;
    int result=binary(arr,key,size);
    if(result!=0){
        cout<<"The is key is found at index "<<endl;
    }else{
        cout<<endl;
    }
}