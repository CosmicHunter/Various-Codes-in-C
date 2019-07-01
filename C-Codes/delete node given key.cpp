//given a value in the linked list that ids the key value the node containing that value has to be deleted 
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void push(struct node **head,int x){
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=x;
	n->next=NULL;
	n->next=(*head);
	*head=n;
	}
void deletenode(struct node ** head,int val){
	struct node *temp=*head;
	struct node *prev=NULL;
	if(temp!=NULL&&temp->data==val){
	        *head=temp->next;
	        free(temp);
	        return ;
             }
     while(temp!=NULL&&temp->data!=val){
	        prev = temp;
			temp=temp->next;
			
		}
		if(temp==NULL)
		   return ;
		prev->next=temp->next;
		free(temp);
}
void printlist(struct node *head){
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()	{
	int n;
	struct node *head=NULL;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		push(&head,a[i]);
	}
	
	printlist(head);
    deletenode(&head,a[2]);
	printlist(head);
	deletenode(&head,a[0]);
	printlist(head);
}
