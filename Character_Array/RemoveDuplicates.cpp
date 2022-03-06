#include<iostream>
#include<cstring>
using namespace std;

void removeDuplicate(char a[]){
	
	int n = strlen(a);
	if(n==1 or n==0){
		return;
	}
	int prev = 0;
	for(int current = 1; current <n; current++){
		if(a[current] != a[prev]){
			prev++;
			a[prev] = a[current];
		}
	}
	a[prev + 1] ='\0';
}


int main(){
	
	char a[100];
	cin.get(a,100);
	
	removeDuplicate(a);
	
	cout<<a<<endl;
	
	
	return 0;
}
