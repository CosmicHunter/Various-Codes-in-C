#include<stdio.h>
#include<math.h>
int main(){
int n,flag=0,i=2;
float lt;
printf("enter a number  ");
scanf("%d",&n);
lt=sqrt(n);
while(i<lt){
	if(n%i==0){
		printf("not prime");
		flag=1;
	}
	i++;
}
if(flag==0)
printf("prime");
return 0;
}
