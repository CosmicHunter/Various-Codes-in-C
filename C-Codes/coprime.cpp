#include<stdio.h>
int main(){
	int a,b;
	printf("Enter number 1\n");
	scanf("%d",&a);
	printf("Enter number 2\n");
	scanf("%d",&b);
	int min;
	min=a<b?a:b;
	int i;
	for(i=2;i<=min;i++){
		if(a%i==0&&b%i==0)
		break;
	}
	if(i==min+1)
	printf("co-prime");
	else
	printf("not co-prime");
	return 0;
}
