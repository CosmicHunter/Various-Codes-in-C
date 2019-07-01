#include<stdio.h>
int main(){
	int i,j,k,c;
	for(i=1;i<=9;i++){
		k=1;
		i<=5?c=i:c=10-i;
		for(j=1;j<=5;j++){
			if(j>=6-c&&j<=5){
				printf("%d",k);
				k++;
			}
			else{
				printf(" ");
		}
			
		}
		printf("\n");}
	
	return 0;
}
