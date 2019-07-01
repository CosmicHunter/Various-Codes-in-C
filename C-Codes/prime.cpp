#include<stdio.h>
int main(){
int i;
int n;
printf("Enter a number");
scanf("%d",&n);
for(i=2;i<n;i++){
	if(n%i==0){
		printf("not prime");
		break;
	}
	}
if(i==n)
printf("prime");
return 0;}
