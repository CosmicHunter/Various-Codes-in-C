#include<stdio.h>
int main(){
	int i,j,k=1;
	int c=1;
	for(i=1;i<=4;i++){
		for(j=1;j<=7;j++){
			if(j>=5-i&&j<=3+i&&c){
				printf("%d",k);
				c=0;
				k++;
			}
			else{
				printf(" ");
				c=1;
			}
			}
			printf("\n");
	}
	return 0;
}
