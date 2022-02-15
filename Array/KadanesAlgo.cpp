#include<iostream>
using namespace std;

int main(){
	int arr[1000],n;
	int cs =0;
	int ms =0;
	cout<<"Enter the size of the array : ";
	cin>>n;
	
	cout<<"Enter the elements of the array : ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int i=0; i<n; i++){
		cs = cs+arr[i];
		if(cs<0){
			cs = 0;
		}
		ms = max(cs,ms);
	}
	
	cout<<"Maximum is : "<<ms<<endl;
	
	return 0;
}
