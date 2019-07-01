#include<stdio.h>

int biser(int beg,int last,int x,int *arr);
int main(){
	int x;
	int arr[]={2,4,6,7,9,11,55,82};
	printf("Enter a number\n");
	scanf("%d",&x);
	          int c=biser(0,7,x,arr);
	printf("the numbers that are greater than or equal to %d are %d",x,c);
	
}
int biser(int beg,int last,int x,int *arr){

	if(beg>last)
	return 0;
	int mid=(beg+last)/2;
	if(arr[mid]>=x){
		return (last-mid+1)+biser(beg,mid-1,x,arr);
	}
	else
	return biser(mid+1,last,x,arr); 
	}
