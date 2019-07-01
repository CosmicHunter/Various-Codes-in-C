#include<stdio.h>
char* rmdup(char *s);
int main(){
	int i,j;
	char s[]="aaabbccddeeiff";
	printf("%s",rmdup(s));
	
}
char* rmdup(char *s){
	int i,j;
	for(i=0;s[i];i++){
		if(s[i]==s[i+1]){
			for(j=i;s[j];j++){
				s[j]=s[j+1];

			}i--;
		}
	}
	return s;
}
