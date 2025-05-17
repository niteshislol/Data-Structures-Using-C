// SumofNatural.c
#include <stdio.h>
int Sum(int n);
int Sum(int n){
    if (n==0 || n==1) return 1;
else return n + Sum(n-1);
}
int Isum(int n){
    int s = 0;
    for(int i=1; i<=n;i++){
        s = s+i; 
    }
            return s;

}
int main() {
    int x = 5;
    printf("%d\n",Sum(x));
    int r = Isum(5);
    printf("%d",r);

  return 0;
}
