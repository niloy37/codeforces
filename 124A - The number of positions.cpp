//56680350	Practice:havoccboi	124A - 21	GNU C++17	Wrong answer on test 5	60 ms	4 KB	2019-07-07 20:59:36	2019-07-07 20:59:36

#include<bits/stdc++.h>
using namespace std;

int find(int a,int b){
	return a-b;
}

int main () {
	int n,a,b;
	cin>>n>>a>>b;
	//cout<<find(n,a)<<endl;
	find(n,a)-1> b ? cout<<b+1 : cout<< find(n,a);
}
