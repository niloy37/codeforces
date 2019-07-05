//56583512	Jul/05/2019 22:23UTC+6	havoccboi	467A - George and Accommodation	GNU C++17	Accepted	31 ms	0 KB

#include<bits/stdc++.h>
using namespace std;

int main () {
int t;
cin>>t;
int c=0;
while(t--){
int a,b;
cin>>a>>b;
if((b-a)>1)
	c++;
}
cout<<c<<endl;

}
