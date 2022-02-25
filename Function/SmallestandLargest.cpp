#include <iostream>
#include<climits>
using namespace std;

int main(){
	int arr[1000],i, n;
	
	cout<<"Enter the size of the array : ";
	cin>>n;
	
	cout<<"Enter the elements of the array : ";
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int largest = INT_MIN;
	int smallest = INT_MAX;
	
	for(i=0; i<n; i++){
		if(arr[i]>largest){
			largest = arr[i];
		}
		if(arr[i]<smallest){
			smallest = arr[i];
		}
	}
	
	cout<<"largest is : "<< largest<<endl;
	cout<<"smallest is : "<<smallest;
	
	return 0;
}
	

