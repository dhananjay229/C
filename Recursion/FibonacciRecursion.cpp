#include<iostream>
using namespace std;

int fib(int n){
	if(n==0 or n==1){
		return n;
	}
	else{
		int temp;
		temp  = fib(n-1) + fib(n-2);
		return temp;
	}
}

int main(){
	int n;
	cin>>n;
	
	cout<<fib(n)<<endl;
	
	return 0;
}
