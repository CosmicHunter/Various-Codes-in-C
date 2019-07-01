#include<stdio.h>
#include<string.h>
int main(){
	int l,i;
	char a[20],temp;
	printf("Enter a Word\n");
     scanf("%s",a);  //gets(a);
	//printf("%s",a);
	l=strlen(a);//for(int l=0;a[l];l++);
		for(i=0;i<l/2;i++){
		    if(a[i]!=a[l-i-1]){
			printf("NOT A PALINDROME");
			break;
			}
			  /*temp=a[i];
		    a[i]=a[l-i-1];
		    a[l-i-1]=temp;*/
	} 
	if(i==l/2)
	printf("palindrome");	     //printf("%s",a);
	return 0;
}
