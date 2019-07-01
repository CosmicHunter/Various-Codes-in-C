#include<stdio.h>
int main(){
  int i,j,n,k=0;
  printf("Enter a number\n");
  scanf("%d",&n);
  for(i=1;i<=3*n;i++){
  	for(j=1;j<=2*n-1;j++){
  		if(i<=n){
  			if(j>=2*n-i)
  			printf("*");
  			else
  			printf(" ");
		  }
		else if(i<=2*n){
			k=0;
			if(j==n){
			printf("|");
			k=1;}
			if(j<=i-(n+1)){
			k=1;
			printf("*");}
			if(j>=i){
			k=1;
			printf("*");
		}
			if(k==0)
			printf(" ");// pehle 3 if false ho gayen to ye condition chaalni chahiye,sirf else lagaya to vo to sirf last if ka else hoga isliye k ki madad leni padegi			
		}
		else{
			if(j<=3*n+1-i)
			printf("*");
			else
			printf(" ");
		}  
	  }
	  printf("\n");
  }
  return 0;
}
