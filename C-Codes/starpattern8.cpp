#include<stdio.h>
int main(){
	int i=1,j;
	while(i<=4){
		for(j=1;j<=7;j++){
			if(j>=i&&j<=8-i) printf("*");
			else printf(" ");
		}
		printf("\n");
		i+=1;
	}
	return 0;
}
