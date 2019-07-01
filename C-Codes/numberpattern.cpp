#include<stdio.h>
int main(){
	int i,j,k=1,l=0;
	for(i=1;i<=6;i++){
		for(j=1;j<=i;j++){
			if(j%2==0)
			printf("%d",l);
			else
			printf("%d",k);
						
		}
		printf("\n");
	}
	return 0;
}
