#include<iostream>
using namespace std;

//first_approch
void bubble_sort(int a[], int n){
	
	if(n==1){
		return ;
	}
	for(int i=0; i<n-1; i++){
		if(a[i]>a[i+1]){
			swap(a[i],a[i+1]);
		}
	}
	bubble_sort(a,n-1);	
}

//second approch

void bubblesort_recursive(int a[],int j,int n){
	
	if(n==1){
		return;
	}
	if(j = n-1){
		return bubblesort_recursive(a,0,n-1);
	}
	if(a[j]>a[j+1]){
		swap(a[j],a[j+1]);
	}
	
	bubblesort_recursive(a,j+1,n);
	return;
}

int main(){
	int arr[] = {5,4,3,1,2};
	int n=5;
	//cout<<bubble_sort(arr,n);
	//
	cout<<bubblesort_recursive(arr,0,n);
	return 0;
}

