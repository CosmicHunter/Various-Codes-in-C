#include <stdio.h>

int a[20][20];

void fun(int x,int y);

int main(){
	
	int n,i,j;
	printf("Enter a number\n");
	scanf("%d",&n);
	fun(1,n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}




void fun(int x,int y){
	
	if(x>y)
	return;
	int cnt=0;
	for(int i=x;i<=y;i++){
		cnt++;
		a[x][i]=cnt;
	}
	for(int i=x+1;i<=y;i++){
		cnt++;
		a[i][y]=cnt;
	}
	for(int i=y-1;i>=x;i--){
		cnt++;
		a[y][i]=cnt;
	}
	for(int i=y-1;i>=x+1;i--){
		cnt++;
		a[i][x]=cnt;
	}
	fun(x+1,y-1);
}	

