#include<iostream>
using namespace std;

int main ( int argc, char** argv){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int arr[n][4];
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++){
			cin>>arr[i][j];
		}
	}
	int ssum = arr[0][0]+arr[0][1]+arr[0][2]+arr[0][3];
	int rank=1;
	for(int i=1;i<n;i++){
		int sum=0;
		for(int j=0; j<4;j++){
			sum+=arr[i][j];
		}
		if(sum > ssum){
			rank++;
		}
	}
	cout<<rank<<endl;
	return 0;
}
//a[v.charAt(i)]
