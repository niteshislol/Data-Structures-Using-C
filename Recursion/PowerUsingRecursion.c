// PowerUsingRecursion.c
#include <stdio.h>
// Takes Some Time
int Pow(int m , int n){
    if(n==0) return 1;

    return Pow(m,n-1)*m;
}
//Short Method
int Power1(int m,int n){
  if(n==0) return 1;
  if(n%2==0) return Power1(m*m,n/2);

  return m*Power1(m*m,(n-1)/2);
}
int main() {
 int x, y;
    printf("Enter the Base: ");
    scanf("%d", &x);

    printf("Enter the Power: ");
    scanf("%d", &y);
    printf("%d",Power1(x,y));
  return 0;
}
