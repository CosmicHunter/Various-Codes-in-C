#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
void append(struct node **head,int x){
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=x;
	n->next=NULL;
	struct node *counter=*head;
    if(*head==NULL)
    	*head=n;
    else{
    	while(counter->next!=NULL){
    		counter=counter->next;
		}counter->next=n;
	}	
	
}
void printlist(struct node *head){
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	struct node *head=NULL;
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
       append(&head,a[i]);		
	}
	printlist(head);
}
