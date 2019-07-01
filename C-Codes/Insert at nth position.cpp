#include<stdio.h>
#include<stdlib.h>
void insert(int x,int n);
struct node{
	int info;
	struct node* link;
};
struct node* head;
void print();
void insert(int x,int n){
    int i;
	struct node *temp1,*temp2;
	temp1=(struct node*)malloc(sizeof(struct node));
	temp1->info=x;
	if(head==NULL){
        head=temp1;	
        temp1->link=NULL;

	return;
}
	if(n==1){
		temp1->link=head;
		head=temp1;
		return;
		}
		temp2=head;
		for(i=1;i<n-1;i++){
		     temp2=temp2->link;
		}
		temp1->link=temp2->link;
		temp2->link=temp1;
		
}
int main()
{
   head=NULL;
	int i,j,n;
	int x,pos;
	printf("how many no?");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter data and position");
		scanf("%d%d",&x,&pos);
		insert(x,pos);
		print();	
		}
		return 0;	
	}
void print(){
	struct node* temp;
	temp=head;
	while(temp){
		printf("%d  ",temp->info);
		temp=temp->link;
	}
}
