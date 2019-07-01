#include<stdio.h>
#include<string.h>
int main(){
int a,b,H;
printf("enter first no.\n");
scanf("%d",&a);
printf("enter second no.\n");
scanf("%d",&b);
for(H=a<b?a:b;H>=1;H--)
{
	if(a%H==0&&b%H==0){
		printf("The HCF of no.1 and no.2 is %d",H);
		break;
	}
}	
	return 0;
	
}
