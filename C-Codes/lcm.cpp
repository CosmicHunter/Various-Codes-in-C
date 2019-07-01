#include<stdio.h>
#include<string.h>
int main(){
int a,b,L;
printf("enter first no.\n");
scanf("%d",&a);
printf("enter second no.\n");
scanf("%d",&b);
for(L=1;L<=a*b;L++){
	if(L%a==0&&L%b==0){
		printf("The LCM of no.1 and no.2 is %d",L);
		break;
	}
}	
	return 0;
	
}
