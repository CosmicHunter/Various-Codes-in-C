#include<stdio.h>
int bs(int beg,int last,int x,int A[]);
int main(){
	int A[10]={1,4,5,7,8,9,10,11,12,15};
	int i,j;
	int pos=bs(0,9,15,A);
	printf("%d",pos);
	
	
}
int bs(int beg,int last,int x,int A[]){
	int mid;
	if(beg>last)
	return -1;
	
	mid=(beg+last)/2;
	if(A[mid]==x)
	  return mid;
	if(A[mid]<x)
	    return bs(mid+1,last,x,A);
	if(A[mid]>x)
	    return bs(beg,mid-1,x,A);
		    
}
