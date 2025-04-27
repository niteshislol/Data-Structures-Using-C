#include <stdio.h>
void swap(int x , int y){
    // this is call by value
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("%d %d\n",x,y);
}
int main() {
    int a = 10,b=20;
  swap(a,b); // this is call by value       
    printf("%d %d",a,b); // this will not change the value of a and b
  return 0;
}