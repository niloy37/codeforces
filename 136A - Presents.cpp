#include<iostream>
using namespace std;
int main () 
{
	int n;
	cin>>n;
	int arr[n];
	int newArr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		newArr[arr[i]-1] = i+1;
	}
	for(int i=0;i<n;i++){
		
		cout<<newArr[i]<<" ";
	}
	return 0;
}
//up
