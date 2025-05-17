// FactorialofN.c
#include <stdio.h>
int Sum(int n);
int Sum(int n){
    if (n==0 || n==1) return 1;
else return n*Sum(n-1);
}

int main() {
    int x = 5;
    printf("%d\n",Sum(x));

  return 0;
}
