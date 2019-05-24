#include<bits/stdc++.h>
using namespace std;
int main () {
int x;
cin>>x;
string s;
cin>>s;
int c1=0,c2=0;
for(int i=0;i<x;i++){
    if(s[i]=='A')
        c1++;
    else c2++;
}


    if(c1>c2) cout<<"Anton";
    else if(c1<c2) cout<<"Danik";
    else cout<<"Friendship";



}
