#include <stdio.h>
/* IF ARRAY A ALL ELEMENTS PRESENT IN ARRAY B THEN THIS WORD IS CALLED AN ANAGRAM(exact same characters in any order) - 
 HOWEVER THIS WORD CAN HAVE DIFFERENT MEANINGS*/
int main() {
    char A[] ="DECIMAL";
    char B[] ="MEDICAL";
    int i,H[26]={0};
    for(i=0;A[i]!='\0';i++){
        H[A[i]-65]+=1;
    }
    for(i=0;B[i]!='\0';i++){
        H[B[i]-65]-=1;
        if(H[B[i]-65]<0){
            printf("not anagram");
            break;
        } }
        if(B[i]=='\0') printf("Its Anagram");
    

    return 0;
}
