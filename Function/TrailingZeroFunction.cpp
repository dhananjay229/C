#include<iostream>
using namespace std;

int zero(int num){
	int ans =0;
	
	for (int i=5; num/i>=1; i=i*5){
		ans += num/i;
	}
	return ans;
}

int main(){
	
	long long int n;
	cout<<"Enter the number : 1";
	cin>>n;
	
	cout<<zero(n)<<endl;
	
	return 0;
}
