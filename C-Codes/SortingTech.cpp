#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int start,int end){
	int i = start+1;
	int piv = a[start];
	for(int j = start+1;j<=end;j++){
		if(a[j]<piv){
			swap(a[i],a[j]);
			i++;
		}
	}
	swap(a[start],a[i-1]);
	return i-1;
}
int rand_part(int a[],int start,int end){
	  int pivpos = start+ rand()%(end-start+1);
	  swap(a[start],a[pivpos]);
	  return partition(a,start,end);
}
void quickSort(int a[],int start,int end){
	if(start<end){
		int piv = rand_part(a,start,end);
		quickSort(a,start,piv-1);
		quickSort(a,piv+1,end);
	}
}
void merge(int a[],int start,int mid,int end){
	int p =start;
	int q = mid+1;
	int k = 0;
	int temp[end-start+1];
    for(int i = start;i<=end;i++){
    	if(p>mid)
    		  temp[k++] = a[q++];
    	else if(q>end)
    	      temp[k++] = a[p++];
    	else if(a[p]>a[q])
    	      temp[k++] = a[q++];
    	else 
    	      temp[k++] = a[p++];            	
    }
    for(int i = 0;i<k;i++)
    	  a[start++] = temp[i];
}
void mergeSort(int a[],int start,int end){
	if(start<end){
		int mid = (start+end)/2;
		mergeSort(a,start,mid);
		mergeSort(a,mid+1,end);
		merge(a,start,mid,end);
	}
}
int main(){

}