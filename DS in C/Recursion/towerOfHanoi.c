#include<stdio.h>
void toh(int n , char a,char b,char c) {
    if(n==1) {
        printf("move disc %d from %c to %c \n",n,a,c);
return;
    }
    toh(n-1,a,c,b);
    printf("move disc %d from %c to %c\n",n,a,c);
    toh(n-1,b,a,c);
}
int main() {
    int n=3;
    
    toh(n,'a','b','c');
    return 0;
}