#include<iostream>
using namespace std;
int Linear_search(int arr[],int n, int key){
		for(int i=0; i<=n; i++){
		if(arr[i]==key){
			return i;
			}		
		
	}
	return 0;

}
int main(){
	
	int arr[100],key,n;
	int i;
	cout<<"Enter the Number : ";
	cin>>n;
	
	for (i=0; i<=n; i++){
		cin>>arr[i];
	}
	cout<<"Enter the Key to search : ";
	cin>>key;
	cout<<Linear_search(arr,n,key);
	
	return 0;
}
