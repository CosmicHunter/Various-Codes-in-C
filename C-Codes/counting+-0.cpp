#include<stdio.h>
int main(){
int x,num,p=0,n=0,z=0;
printf("Enter the number of number you wish to enter");
scanf("%d",&x);             
while(x--){
	printf("Enter a number");
	scanf("%d",&num);
	if(num<0)
	n++;
  if(num>0)
	p++;
	if(num==0)
	z++;
}
printf("the number of positive,negative,zeroes entered resp. are %d %d %d",p,n,z);
return 0;
}
	
