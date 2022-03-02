#include<iostream>
using namespace std; 

int main()
{
	int arr[] = {1, 3, 5, 7, 10, 11, 12, 13};
	int j = sizeof(arr) / sizeof(int) - 1;
	int k = 16;
	int i = 0;
	while(i<j){
		int current_sum = arr[i] + arr[j];
		if(current_sum>k){
			j--;
		}
		else if(current_sum<k){
			i++;
		}
		else if(current_sum == k)
		{
			cout<<arr[i] <<" and "<< arr[j]<<endl;;
			i++;
			j--;
		}
	}
		
		return 0;
}

