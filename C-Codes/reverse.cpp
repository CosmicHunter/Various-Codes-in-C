#include<stdio.h>
#include<stdlib.h>
struct node* insert(int x);
void print();
struct node *rev(struct node* head);
struct node{
	int data;
struct node* link;
};
struct node* head;
struct node* rev(struct node* head);
int main(){
   struct node* head=NULL;
   int n,x,i;
   printf("Enter how many values you want to insert\n");
   scanf("%d",&n);
  for(i=0;i<n;i++){
  	printf("enter data \n");
  	scanf("%d",&x);
  	head=insert(x);
  }
  print();
  rev(head);
  print();
}

void print(){
	struct node* temp;
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);		
		temp=temp->link;
	}
}
struct node* insert(int x){
	struct node*head;
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
if(head==NULL){
temp->link=NULL;
	head=temp;
	return head;
}
	
	if(head!=NULL){
	     temp->link=head;
		head=temp;
	}		    

}

struct node *rev(struct node* head){
	struct node *prev,*temp,*next,*curr;
	curr=head;
	prev=NULL;
	while(curr!=NULL){
		next=curr->link;
		curr->link=prev;
		prev=curr;
		curr=next;
	}
    head=prev;
	return head;	 
}
