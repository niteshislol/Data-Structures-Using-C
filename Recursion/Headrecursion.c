// Headrecursion.c
#include <stdio.h>
void fun(int n){
    int i = 1;
    while(i<=n){
        printf("%d",i);
        i++;
    }
}
int main() {
    int x = 3;
    fun(3);
  return 0;
}
