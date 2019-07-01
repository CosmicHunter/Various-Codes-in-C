#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
void insert(int x);
void print();
int main(){
	head=NULL;
	int n,x;
	printf("Enter how many items");
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		printf("Enter data\n");
		scanf("%d",&x);
		insert(x);
		
	}print();
	return 0;
}
void insert(int x){
	
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
if(head==NULL){
temp->next=NULL;
	head=temp;
	return;
}
	
	if(head!=NULL){
	     temp->next=head;
		head=temp;
	}		    

}
void print(){
	struct node* temp;
	temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);		
		temp=temp->next;
	}
}
