#include<bits/stdc++.h>
using namespace std;
int main () {
string s;
string t;
bool f = false;
while(cin>>s){
  int      count =0;
    while(cin>>t){
        if(s[0]==t[0] || s[1]==t[1]){
           f=true;
          }
    count++;
    if(count>4) break;
    }
    if(f==false){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
}
