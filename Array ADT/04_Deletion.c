#include <stdio.h>
//github.com/niteshislol
struct Array
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr);
void Display(struct Array arr){
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}
int Deletion(struct Array *arr,int index){
    int x=0;
    if(index>=0 && index <arr->length){
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}


int main() {
  struct Array arr={{2,3,4,5,6},10,5};
  printf("%d\n",Deletion(&arr,0));
  Display(arr);
  return 0;
} 
