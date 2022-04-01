#include<iostream>
using namespace std;

/*
//first approch
int power(int a, int n){
	if(n==0){
		return 1;
	}
	return a * power(a,n-1);
}
*/

//second approch
int fast_power(int a, int n){
	if(n==0){
		return 1;
	}
	int smallest_ans = fast_power(a,n/2);
	smallest_ans *= smallest_ans;
	
	if(n & 1){
		return smallest_ans * a;
	}
	return smallest_ans;
}

int main(){
	int a,n;
	
	cout<<" Enter the Number : ";
	cin>>a;
	cout<<" Enter the power : ";
	cin>>n;
	cout<<" Answer is : "<<fast_power(a,n)<<endl;
	
	return 0;
}
