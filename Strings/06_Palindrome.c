#include <stdio.h>
int main(){
    char A[]="Python";
    char B[7];
    int i,j,ispalindrome;
    for(i=0;A[i]!='\0';i++){
    } 
    i = i-1;
    for(j=0;i>=0;i--,j++){
        B[j] = A[i]; 
    } 
    B[j]='\0';
    printf("Reversed : %s\n",B);
for(i=0,j=0; A[i]!='\0'&& B[j]!='\0';i++,j++){
    if(A[i]!=B[j]) { ispalindrome =0;
         break;}}


    if(ispalindrome) printf("%s is Palindrome ",A);
else printf("Not A Palindrome!");
    return 0;
}