#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insert_after(struct node**head,int x)
{
	struct node* n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=x;
	n->next=NULL;
	struct node *p;
	p=*head;
	if(*head==NULL)
		*head=n;
	else{
		while(p->next!=NULL)
			p=p->next;
		  p->next=n;
	}	
		}
void printlist(struct node* head){
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}		
void deletenode(struct node **head,int pos){
     struct node *curr,*prev,*temp;
     curr=*head;
     temp=*head;
     prev=NULL;
     int i;
     if(head==NULL){
     	return ;
	 }
     if(pos==1){
	 *head=(*head)->next;
      return ;
 }
	 if(pos==2){
	 	curr=temp->next;
	 	temp->next=curr->next;
	 	free(curr);
	 	return ;
	 }    
     for(i=1;i<=pos-2;i++){
     	temp=temp->next;
	 }curr=temp->next;
	 temp->next=curr->next;
	 free(curr);
}		
int main(){
	int n;
	scanf("%d",&n);
	struct node *head=NULL;
		int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		insert_after(&head,a[i]);
	}
	printlist(head);
	deletenode(&head,n);
	printlist(head);
	
}
