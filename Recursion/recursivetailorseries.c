#include <stdio.h>
double e(int x , int y){
    static double p =1,f=1;
    double r;

    if(y==0) return 1;
    r = e(x,y-1);
    p=p*x;
    f=f*y;
    return r+ p/f;
}
int main() {

    printf("%lf \n",e(1,10));
  // Cod e here
  return 0;
}
