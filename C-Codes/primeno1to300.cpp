#include<stdio.h>
int main(){
char a=65;
int i,j;
for(i=1;i<=7;i++){
	
	  a=65;
	for(j=1;j<=13;j++){
			if(j<=8-i||j>=6+i){
		
		printf("%c",a);
			j<7?a++:a--;
	} 
	  else{
	  printf(" ");
	  if(j==7)
	  a--;
}
	  }
	  	 
		 
	  printf("\n");
}
return 0;	
}
