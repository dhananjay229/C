#include<iostream>
using namespace std;

int ABCDpattern(int n){
	
	for(int i=1; i<=n; i++){
		char alph ='A';
		for(int j=1; j<=n-i+1; j++){
			cout<<alph;
			alph = alph + 1;
		}
		cout<<endl;
	}
}

int main(){
	
	int n;
	
	cout<<"Enter the number to print : ";
	cin>>n;
	
	ABCDpattern(n);
	return 0;
}
