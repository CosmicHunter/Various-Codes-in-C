#include<stdio.h>
int power(int x,int y);
int main(){
	int i,x,y;
	printf("Enter a Number\n");
	scanf("%d",&x);
	printf("Enter the power it must be raised \n");
	scanf("%d",&y);
	int c=power(x,y);
	printf("%d",c);
	return 0;
}
int power(int x,int y){
	int i,r=1;
	for(i=1;i<=y;i++){
		r=r*x;
	}
	return r;
	
}
