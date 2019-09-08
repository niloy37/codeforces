#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	int arr[1001];
	for(int i=0; i < n ; i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int out;
	if(n%2 == 0){
		cout<<arr[(n/2)-1];
	}
	else cout<<arr[((n/2)+1)-1];


	return 0;
}
