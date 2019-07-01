#include<stdio.h>
	int m;
void fun(int x,int y);
int ans=0;
int main(){
	int i,j;
	int n;
	printf("Enter the no of rows");
	scanf("%d",&n);
	printf("enter the no of columns");
	scanf("%d",&m);
	fun(n,1);
	printf("%d",ans);
}

void fun(int x,int y){

	y>=1&&y<=m;
	if(x==1&&y==m){
		   ans++;
		       return;
	      } 
	     if(x>1)
	        fun(x-1,y);
	     if(y<m)
	       fun(x,y+1);
	} 
