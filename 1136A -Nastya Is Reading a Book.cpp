#include<bits/stdc++.h>
using namespace std;

int main (){
map<int,int> mp;
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    mp.insert(make_pair(x,y));
}
int k;
cin>>k;
map<int,int>::iterator it;
bool f = false;
int c=0;
for(it=mp.begin(); it != mp.end();it++){
    if(k>= it->first && k<=it->second){
            f=true;
    }
    if(f==true)c++;
}

cout<<c<<endl;
}
