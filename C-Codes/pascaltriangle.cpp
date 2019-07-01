#include<stdio.h>
int factorial(int x);
int combi(int n,int r);
void printpascal(int N);
int main(){
	int N;
	printf("Enter the no. of lines you want to print?  \n");
	scanf("%d",&N);
	printpascal(N);
	return 0;	
}
int factorial(int x){
	int f=1;
	for(int i=1;i<=x;i++){
		f=f*i;
	}
	return f;
	}
int combi(int n,int r){
	return factorial(n)/factorial(r)/factorial(n-r);
}	
void printpascal(int N){
	int i,j;
	int k=1;
	for(i=1;i<=N;i++){
		int r=0;
		for(j=1;j<=2*N-1;j++){
			if(j>=N+1-i&&j<=N-1+i&&k){
				printf("%d",combi(i-1,r));
				k=0;
			r++;	
			}
			else{
			    printf(" ");
			    k=1;
		}// r++;r++ should not be written here
	}
printf("\n");	
}

}
