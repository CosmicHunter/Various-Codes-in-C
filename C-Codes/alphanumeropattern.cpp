#include<stdio.h>
int main(){
	int i,j;
	char p='A';
	int k=1;
	for(i=1;i<=4;i++){
	p=65;
	k=1;	
		for(j=1;j<=7;j++){
			if(j>=5-i&&j<=3+i){
			if(j<=4){
			printf("%d",k);
		k++;
		}
			else{
			
			printf("%c",p);
			p++;}

		}
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
