#include<iostream>
using namespace std;

int main()
{
	int b[] = {1, 2, 3};
	cout << b<< endl;
	
	char a[] = {'a','b','c'};
	cout<< a <<endl;
	
	char s1[] = {'h','e','l','l','o'};
	char s2[] = "hello";
	
	cout<< s1 << " "<< sizeof(s1) <<endl;
	cout << s2 << " "<< sizeof(s2) << endl;
}
