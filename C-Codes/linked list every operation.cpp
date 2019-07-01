#include<stdio.h>
#include<stdlib.h>
void insert(int data,int n);
void print();
void del(int n);
struct node{
	int data;
	struct node* next;
	};
	struct node* head;
void insert(int data,int n){
	int i;
	struct node *temp1,*temp2;
	temp1=(struct node*)malloc(sizeof(struct node));
	temp1->data=data;
	temp1->next=NULL;
	if(head==NULL){
		temp1->next=NULL;
		head=temp1;
		return;
	}
	if(n==1&&head!=NULL){
	      temp1->next=head;
		  head=temp1;	
return;	
	}
	temp2=head;
	for(i=1;i<n-1;i++){
		temp2=temp2->next;
		}
		temp1->next=temp2->next;
		temp2->next=temp1;
	
}
void del(int n){
	   struct node *temp1,*temp2;
	   int i;
	   temp1=head;
	   temp2=head;
	   if(n==1){
		   	head=temp1->next;
		   	free(temp1);
		    return;
	   }
	   else{
	    for(i=1;i<n-1;i++){
	    	temp2=temp2->next;
		}   
		temp1=temp2->next;
		temp2->next=temp1->next;
		free(temp1);
		return;	
	   }
}
void print(){
	struct node* temp;
	temp=head;
	while(temp){
		printf("%d",temp->data);
		temp=temp->next;
	}
}

int main(){
	int n;
	head=NULL;
	printf("Enter how many numbers");
	scanf("%d",&n);
	int i,x,y,z;
	for(i=0;i<n;i++){
		printf("Enter data and position");
		scanf("%d %d",&x,&y);
		insert(x,y);
	}
	print();
	printf("Enter the position you want to delete\n");
	scanf("%d",&z);
	del(z);
	print();
	return 0;
}
