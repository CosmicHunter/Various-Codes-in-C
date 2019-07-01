#include<stdio.h>
#include<string.h>
int main(){
	int i,j,cnt=0;
	char a[50],b[50];
	printf("Enter two strings\n");
	scanf("%s\n",a);
	scanf("%s",b);
	for(i=0;a[i];i++){
		for(j=0;b[j];j++){
			if(a[i]==b[j])
			cnt++;
		}
		
	}
	if(cnt==strlen(a))
	printf("Anagrams");
	else
	printf("NOtAnagrams");
	return 0;
}

