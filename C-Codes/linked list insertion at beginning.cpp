#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insert_at_beg(struct node ** head,int x){
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=x;
	n->next=NULL;
	n->next=(*head);
	(*head)=n;
}
void printlist(struct node * head){
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main(){
	int n;
	printf("Enter the number of nodes you want\n");
	scanf("%d",&n);
	int i;
	struct node *head=NULL;
	int a[n];
	printf("Enter values\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		insert_at_beg(&head,a[i]);
	}
	printlist(head);
}

