#include<iostream>
using namespace std;


void readline(char a[], int maxlen, char delim='\n')
{
	int i=0;
	char ch = cin.get();
	while( ch!=delim){
		a[i] = ch;
		i++;
		if(i == (maxlen-1)){
			break;
		}
		ch = cin.get();
	}
	a[i] = '\0';
	return;
}

int main()
{
	char ch[100];
	readline(ch, 1000,'$');
	cout<< ch<< endl;
	return 0;	
}
