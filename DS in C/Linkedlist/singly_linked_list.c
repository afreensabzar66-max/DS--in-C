#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node *create() {
    struct node *head =NULL,*p,temp;
    int n,i,data;
    printf("enter number of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        struct node *temp=malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d",&data);
        temp->data=data;
        temp->next=NULL;
        if(head==NULL) {
            head=temp;
            p=temp;
        }
        p->next=temp;
        p=temp;
    }
    return head;
}
void traverse(struct node *head) {
    struct node *p=head;
    while(p!=NULL) {
        printf("%d",p->data);
        p=p->next;
    }
}
struct node *insertion_at_begining(struct node *head ,int v) {
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=v;
    newnode->next=head;
    head=newnode;
    printf("after insertion : ");
    traverse(head);
    return head;
}
struct node *insertion_at_end(struct node *head,int v) {
    struct node *newnode=malloc(sizeof(struct node));
    struct node *p=head;
      while(p->next!=NULL) {
        p=p->next;
    }
    newnode->data=v;
    p->next=newnode;
    newnode->next=NULL;
    traverse(head);

}
struct node *insertion_at_position(struct node *head,int v,int pos) {
    struct node *newnode=malloc(sizeof(struct node));
    struct node *p=head;
    for(int i=0;i<pos-1;i++) {
        p=p->next;
    }
    newnode->data=v;
    newnode->next=p->next;
    p->next=newnode;
   traverse(head);
   return head;
}
struct node *deletion_at_begining(struct node*head) {
    if(head==NULL) {
        printf("empty");
    }
    struct node*p=head;
    head=head->next;
    free(p);
    printf("\nafter deletion: ");
    traverse(head);
}
struct node *deletion_at_end(struct node*head) {
    if(head==NULL) {
        printf("empty");
    }
    struct node*p=head;
    while(p->next->next!=NULL) {
        p=p->next;
    }
    p->next=NULL;
    free(p->next);
   printf("\nafter deletion from end: ");
    traverse(head);
}
struct node *deletion(struct node*head,int pos){
    struct node*p=head;
    for(int i=0;i<pos-1;i++) {
        p=p->next;
    }
    struct node*temp=p->next;
    p->next=p->next->next;
    free(temp);
    printf("\nafter deleting el at pos %d : ",pos);
    traverse(head);
}
struct node *delete_certain_value(struct node*head,int val) {
    struct node*p=head;
    while(p->next!=NULL) {
        if(p->next->data==val) {
            struct node*temp=p->next;
            p->next=p->next->next;
            free(temp);
        }
        p=p->next;
    }
    printf("\nafter deletion of %d : ",val);
    traverse(head);
}
struct node *delete_all_occ(struct node*head,int val) {
     struct node*p=head;
     while(head!=NULL && head->data==val) {
        struct node *temp=head;
        head=head->next;
        free(temp);
     }
     p=head;
     while(p!=NULL && p->next!=NULL) {
        if(p->next->data==val) {
            struct node*temp=p->next;
            p->next=p->next->next;
            free(temp);
        }
        p=p->next;
    }
    printf("\nafter deletion of %d at all positions : ",val);
    traverse(head);
}



int main() {
    // int v,pos,val;
    // struct node *head=malloc(sizeof(struct node));
    // struct node *n1=malloc(sizeof(struct node));
    // struct node *n2=malloc(sizeof(struct node));
    // struct node *n3=malloc(sizeof(struct node));
    // struct node *n4=malloc(sizeof(struct node));
    // head->data=2;
    // head->next=n1;
    // n1->data=3;
    // n1->next=n2;
    // n2->data=4;
    // n2->next=n3;
    // n3->data=5;
    // n3->next=n4;
    // n4->data=6;
    // n4->next=NULL;
    struct node*head;
    head=create();

   traverse(head);
//    printf("\nenter value to be inserted:");
//    scanf("%d",&v);
    //insertion_at_begining(head,v);
    //insertion_at_end(head,v); 
    //  printf("\nenter position where value is to be inserted or deleted:");
    // scanf("%d",&pos);
    // insertion_at_position(head,v,pos);
   // deletion_at_begining(head);
    // deletion_at_end(head);
   // deletion(head,pos);
    //  printf("\nenter value to be deleted:");
    //  scanf("%d",&val);
    // delete_certain_value(head,val);
    //  delete_all_occ(head,val);
      return 0;
}