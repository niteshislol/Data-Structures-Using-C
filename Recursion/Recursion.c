// Recursion.c
#include <stdio.h>
void fun1(int n){
    if(n>0){
        // printf("%d",n);
        fun1(n-1);
        printf("%d",n);
    }
}

int main() {
    int x=3;
    fun1(x);
  return 0;
}
