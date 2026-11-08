#include<stdio.h>
void traverse(int arr[],int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void linear_search(int arr[],int n,int key) {
    int flag=0;
    for(int i=0;i<n;i++) {
        if(arr[i]==key) {
            printf("key found at index %d",i);
            flag=1;
            break;
        }
    }
    if(flag==0) {
          printf("not found");
    }
}
void binary_search(int arr[],int n,int key) {
  int start=0,end=n-1;
  int flag=0;
 
  while(start<=end) {
     int mid=(start+end)/2;
    if(arr[mid]==key) {
        printf("key found at index %d",mid);
         flag=1;
         break;
    }else if(arr[mid]<key) {
        start=mid+1;
    }else{
        end=mid-1;
    }
  }
  if(flag==0) {
  printf("not found");
  }
}
void insertion(int arr[],int n,int pos,int v) {
    for(int i=n;i>=pos ;i--) {
        arr[i]=arr[i-1];
    }
    arr[pos]=v;
    n++;
    traverse(arr,n);
}
void deletion(int arr[],int n,int pos) {
    for(int i=pos;i<n ;i++) {
        arr[i]=arr[i+1];
    }
   n--;
    traverse(arr,n);
}
void updateByValue(int arr[],int n,int key ,int v)  {
    int flag=0;
    for(int i=0;i<n;i++) {
        if(arr[i]==key) {
            arr[i]=v;
            flag=1;
            break;
        }
    }
      traverse(arr,n);
    if(flag==1) {
        printf("\nupdate sucessful");
    }else {
        printf("\nel not found");
    }
}
void updateByPos(int arr[],int n,int v,int pos) {
    arr[pos]=v;
    traverse(arr,n);
     printf("\nupdate sucessful");
}

int main() {
    int n,v,pos;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:");
    for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
    }
    printf("Traverse: ");
    traverse(arr,n);
    int key;
    printf("\nEnter key:");
    scanf("%d",&key);
    //  printf("linear search : ");
    // linear_search(arr,n,key);
    // printf("\nbinary search : ");
    // binary_search(arr,n,key);
    printf("Enter position:");
    scanf("%d",&pos);
    printf("Enter value inserted :");
    scanf("%d",&v);
    //printf("\nArray after insertion : ");
    //insertion(arr,n,pos,v) ;
    //  printf("\nArray after deletion : ");
    // deletion(arr,n,pos) ;
    updateByValue(arr,n,key,v);
    updateByPos(arr,n,v,pos);
    return 0;
}