#include<iostream>
using namespace std;

int Binary_search(int arr[], int n,int k)
{
	int s=0;
	int e=n;
	
	while(s<=e){
		int mid=(s+e)/2;
		
		if(arr[mid]==k){
			return mid;
		}
		else if(arr[mid]>k){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}	
	return -1;
}


int main()
{
	int arr[100],n,k;
	
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Enter the key : ";
	cin>>k;
	
	cout<<Binary_search(arr,n,k);
	
	return 0;
}
