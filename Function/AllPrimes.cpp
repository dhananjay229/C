#include<iostream>
using namespace std;

bool prime(int num){
		int i;
		for( i=2; i<=num-1; i++){
			if(num%i ==0){
				return false;
			}
		}
		return true;
		
}

int main(){
	int n;
	
	cout<<"Enter the number : ";
	cin>>n;
	if(prime(n)){
	
	cout<<n<<" is prime "<<endl;
}
else{
	cout<<n<<" is not prime ";
}
	return 0;
}
