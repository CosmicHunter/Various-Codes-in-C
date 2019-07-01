#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insert_at_beg(struct node **head,int x){
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=x;
	n->next=NULL;
	n->next=*head;
	*head=n;
}
void mid(struct node * head){
	struct node *slow,*fast;
	slow=head;
	fast=head;
	if(head!=NULL){
		while(fast!=NULL&&fast->next!=NULL){
			fast=fast->next->next;
			slow=slow->next;
			}
			printf("%d",slow->data);
	}
}
int main(){
	int n;
	struct node* head=NULL;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		insert_at_beg(&head,a[i]);
	}
	mid(head);
}
