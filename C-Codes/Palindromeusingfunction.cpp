#include<stdio.h>
#include<string.h>
int ispal(char a[]);
int main(){
	char str[10];
	gets(str);
	if(ispal(str))
	printf("Palindrome");
	else
	printf("not");
return 0;
}
int ispal(char a[]){
	int l,i;
	l=strlen(a);
	for(i=0;i<l/2;i++){
		if(a[i]!=a[l-i-1])
		return 0;  
	}
	return 1;
}
