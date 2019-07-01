#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	int id;
	char *name;
	struct node *left;
	struct node *right;
};
struct node *root;
struct node* insert_node(struct node *root,int x,char name[]){
	struct node *temp;
	int i;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->id=x;
	for(i=0;name[i]!='\0';i++){
	     temp->name[i]=name[i];
	 }
	if(root==NULL){
	     root=temp;
	     return root;
	 }
	 if(root->id<x)
	      insert_node(root->right,x,name);
	 if(root->id>x)
	      insert_node(root->left,x,name);     
		}
int findnode(struct node *root,char name[]){
	struct node *temp;
	int i,c=0;
	temp=root;
	for(i=0;i<strlen(name);i++){
	if(root->name[i]==name[i])
		     c++;
		     }
			 if(c==strlen(name))
			    return root->id;
			 if(root->left)
		         findnode(root->left,name);
		if(root->right)
		         findnode(root->right,name);         
	  return -1;
}
int main(){
	int T;
	scanf("%d",&T);
	root=NULL;
	while(T--){
		int n,i;
		scanf("%d",&n);
		char name[20];
	    for(i=0;i<n;i++){
	    	scanf("%s",name);
	    	insert_node(root,i,name);
		}
		int q;
		scanf("%d",&q);
	
		for(i=0;i<q;i++){
			scanf("%s",name);
			
			findnode(root,name);
		}
	}
}		
