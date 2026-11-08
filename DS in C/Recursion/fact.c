#include<stdio.h>
long long fact(int n) {
    if(n==0) {
        return 1;
    }
    return n*fact(n-1);
}
int fib(int n) {
    if(n==0 || n==1) {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main() {
    int n;
    printf("enter n : ");
    scanf("%d",&n);
   // printf("factorial = %d",fact(n));
    printf("\n%dth fibonacci term is %d",n,fib(n));
    return 0;
}