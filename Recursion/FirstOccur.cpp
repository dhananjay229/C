#include<iostream>
using namespace std;

/*first approch

int firstOccur(int *a, int n, int k){
	if(n==0){
		return -1;
	}
	//recursive
	if(a[0]==k){
		return 0;	
	}
	
	int i = firstOccur(a+1,n-1,k);
	
	if(i == -1){
		return -1;
	}
	return i+1;
}

*/

int linearsearch(int *a, int i, int n, int k){
	if(i==n){
		return -1;
	}
	if(a[i] == k){
		return i;
	}
	return linearsearch(a,i+1,n,k);
}


int main(){
	int arr[] = {1,2,3,7,4,5,6,7,10};
	int key = 7;
	int n = sizeof(arr)/sizeof(int);
	
	//cout<<firstOccur(arr,n,key);
	cout<<linearsearch(arr,0,n,key);
	return 0;	
}
