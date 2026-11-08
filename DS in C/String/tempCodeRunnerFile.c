#include<stdio.h>
int length(char s1[]) {
     int len=0;
     while(s1[len]!='\0') {
        len++;
     }
     return len;
}
int lp(char*a) {
    int i=0;
    while(*(a)!='\0') {
        i++;
       a++;
    }
    return i;
}
void print(char *a) {
    while(*a!='\0') {
        printf("%c",*a);
        *a++;
    }
}
void copy(char s1[],char s2[]) {
    int i=0;
    while(s1[i]!='\0') {
        s2[i]=s1[i];
        i++;
    }
s2[i]='\0';
}
void cp(char*s1,char *s2) {
    while(*s1!='\0') {
        *s2=*s1;
        s1++,s2++;
    }
    *s2='\0';
}
void cat(char s1[], char s2[]) {
      int i=0;
      while(s1[i]!='\0' && s1[i]!='\n') {
        i++;
      }
      int j=0;
      while(s2[j]!='\0' && s2[j]!='\0') {
        s1[i]=s2[j];
        i++,j++;
      }
      s1[i]='\0';
}
void rev(char s1[]) {
    int l=length(s1)-1;
    for(int i=l;i>=0;i--) {
        printf("%c",s1[i]);
    }
}
void pl(char s1[]) {
     int l=length(s1)-1;
    int st=0 , end=l;
    while(st<end) {
    if(s1[st]!=s1[end] ) {
          printf("not");
          return;
    }
    st++,end--;
    }
    printf("P");
}
int main() {
    char s1[100], s2[100];

  printf("enter string1:");
  fgets(s1,sizeof(s1),stdin);
//     printf("enter string2:");
//   fgets(s2,sizeof(s2),stdin);
  
 // int len=length(a)-1;
  //  printf("length is : %d",len);
  //  printf("\nstring is : ");
  //  print(&a);
 // printf("%d",lp(&a));
//  copy(s1,s2);
//  printf("copied string is %s",s2);
 //cp(&s1,&s2);
 //printf("copied string is %s",s2);
//  cat(s1,s2) ;
//  printf("%s",s1);
//rev(s1);
pl(s1);
}