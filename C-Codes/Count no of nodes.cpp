#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void push(struct node ** head,int x){
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=x;
	n->next=NULL;
    n->next=*head;
    *head=n;
}
int count(struct node * head){
	int c=0;
	struct node *temp=head;
	while(temp!=NULL){
		temp=temp->next;
		c++;
	}
	return c;
}
int reccount(struct node *head){
	int c;
	if(head==NULL)
	    return 0;
	    return 1+reccount(head->next);
}
int main(){
	int n;
	scanf("%d",&n);
	struct node *head=NULL;
	int a[n];
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
    push(&head,a[i]);
}
    int x=count(head);
    int  y=reccount(head);
    printf("%d %d",x,y);

 
}
