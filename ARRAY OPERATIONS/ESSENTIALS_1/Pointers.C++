#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int main() {
    
    // int A[]={22,43,66,54,62};
    int *p , A;
    p = new int[5];
    
    // p=(int *)malloc(5*sizeof(int));
        for(int i=0;i<6;i++){
    scanf("%d",&p[i]);}
    // p = A;
    for(int i=0;i<6;i++){
    printf("%d\n" , p[i]);}
    // printf("&d\n" , sizeof(A));
    delete [] p;
    free(p); 
    return 0;
}