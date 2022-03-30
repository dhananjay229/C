#include<iostream>
using namespace std;

bool issorted(int a[], int n){
	
	if( n==0 or n==1){
		return true;
	}
	
	if(a[0]<a[1] and issorted(a+1,n-1)){
		return true; 
	}
	return false;
}


int main(){
	int arr[] = {1,2,3,8,4,5};
	int n = sizeof(arr)/sizeof(int);
	int temp;
	temp = issorted(arr,n);
	
	if(temp == true){
		cout<<"Array is Sorted"<<endl;
	}	
	else{
		cout<<"Array is not Sorted"<<endl; 
	}
	return 0;
}
