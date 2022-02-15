#include<iostream>
using namespace std;

int selection_sort(int arr[],int n){
	
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[i]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

int main(){
	int arr[100],n;
	
	cin>>n;
	
	for(int i=0; i<n; i++){
		
		cin>>arr[i];
	}
	selection_sort(arr,n);
	return 0;
}
