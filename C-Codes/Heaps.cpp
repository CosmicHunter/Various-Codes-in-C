#include<iostream>
#include<bits/stdc++.h>
void max_heapify(int a[],int i,int n){
	int left = 2*i;
	int right = 2*i+1;
	int largest;
	if(left<=n && a[left]>a[i])
		  largest = left;
	else 
	    largest  =i;	
    if(right <=n && a[right]>a[largest])
    	  largest = right;
    if(largest!=i){
    	swap(a[i],a[largest]);
    	max_heapify(a,largest,n);
    }	
}
void  build_maxheap(int a[],int n){
	for(int i=n/2;i>=1;i--)
		  max_heapify(a,i,n);
}
void min_heapify(int a[],int i,int n){
	int left = 2*i;
	int right = 2*i+1;
	int smallest;
	if(left<=n && a[smallest]<a[i])
		  smallest = left;
	else
	    smallest = i;
	if(right<=n && a[right]<a[smallest])
	 smallest = right
	if(smallest!=i){
	   swap(a[i],a[smallest]);
	   min_heapify(a,smallest,n);
	}     	
}
void build_minheap(int a[],int n){
	for(int i=n/2;i>=1;i--){
		min_heapify(a,smallest,n);
	}
}
int main(){

}
