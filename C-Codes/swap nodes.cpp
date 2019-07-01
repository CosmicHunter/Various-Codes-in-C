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
void exchange(struct node **head,int x,int y){
	if(x==y)
	    return ;
	 struct node *prevx,*currx,*prevy,*curry;
	 currx=*head;
	 prevx=NULL;
	 while(currx&&currx->data!=x){
	 	prevx=currx;
	 	currx=currx->next;
	 }   
	 curry=*head;
	 prevy=NULL;
	 while(curry&&curry->data!=y){
	 	prevy=curry;
	 	curry=curry->next;
	 }
	 if(currx==NULL||curry==NULL)
	      return;
	    prevx->next =curry;
		prevy->next=currx;
		struct node *temp=currx->next;
		currx->next=curry->next;
		curry->next=temp;
		   
}		
void printlist(struct node *head){
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	struct node*head=NULL;
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		insert_after(&head,a[i]);
	}
	printlist(head);
	int x,y;
	scanf("%d %d",&x,&y);
	exchange(&head,x,y);
	printlist(head);
}
