#include<stdio.h>
int main(){
	int i,j,k=0,p;
	for(i=1;i<=5;i++){
		if(i%2==0){
		k--;
		k=k+i;}
		else{
		k=k+1;
		}
		p=k;
		for(j=1;j<=2*i-1;j++){
				if(j%2==0){
					printf("*");
				}
				else{
					printf("%d",p);
					if(i%2){
						k++;
						p++;
					}
					else
					p--;
				}
				
		}
		printf("\n");
	}
	return 0;
}
