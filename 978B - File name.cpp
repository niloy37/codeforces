#include<bits/stdc++.h>
using namespace std;


int main () {
int n;
cin>>n;
string s;
cin>>s;
int x = 0;
int rcount = 0;

for(int i=0;i<n;i++){
    if(s[i]=='x'){
        x++;
    if(x==3){
        rcount++;
    x--;
    }
    }
    else x=0;
}
cout<<rcount;
}
