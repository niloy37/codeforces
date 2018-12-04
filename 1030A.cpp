//https://codeforces.com/problemset/problem/1030/A

#include<bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin>>n;
    int array [n];
    int i=0;
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    for(i=0;i<n;i++) {
			if(array[i]==1) {
				cout<<"Hard";
				break;
			}

		}
		if(i==n) {
			cout<<"Easy";
		}
}
