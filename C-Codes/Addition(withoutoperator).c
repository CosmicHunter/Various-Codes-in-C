#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int main(){
	int a,b,ans;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	ans = add(a,b);
	printf("Addition of %d & %d is %d",a,b,ans);
	return 0;
}
int add(int x,int y){
	while(y!=0){
		int carry = x & y;
		x = x^y;
		y = carry<<1;}
	}
	return x;
