#include<stdio.h>
int bs(int arr[],int n,int start,int end,int key) {

    int mid=(start+end)/2;
    if(start>end) {
        return -1;
    }
    if(arr[mid]==key) {
        return mid;
    }
    if(key>arr[mid]) {
        return bs(arr,n,mid+1,end,key);
    }
    return bs(arr,n,start,mid-1,key);
}
int main() {
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    int key,start,end;
    scanf("%d",&key);
    printf("found at %d",bs(arr,n,0,n-1,key));
    return 0;
}