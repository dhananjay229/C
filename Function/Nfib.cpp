#include<iostream>
using namespace std;

int Nfib(int n){
	
	int t1 = 0;
	int t2 = 1;
	int temp;
	   for(int i=1; i<=n-1; i++){		   
			temp = t1 + t2;
			t1 = t2;
			t2 = temp;
		}
		return temp;
		
	
	return 0;
	
}


int main(){
	
	int n;
	
	cout<<"Enter the Number : ";
	
	cin>>n;
	
	cout<<Nfib(n);
	
	return 0;	
}
