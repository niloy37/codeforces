//56620471	Practice:havoccboi	133A - 34	GNU C++17	Accepted	92 ms	8 KB	2019-07-06 14:45:27	2019-07-06 14:45:27	

#include<bits/stdc++.h>
using namespace std;
int main () {
	string s;
	cin>>s;
	bool flag  = false;
	for(char a : s){
		if(a == 'H' || a == 'Q' || a =='9'){
			flag = true;
		}
	}
	if(flag == true)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
