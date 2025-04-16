#include <stdio.h>
using namespace std;
int main(){
    int a[]={1,3,5,4,9};
    int size = 5;
    int key = 4;
    for(int i=0; i<size;i++){
        if(a[i]==key){
        printf("at %d index",i);
        break;
    }
     }
    
    return 0;
    }