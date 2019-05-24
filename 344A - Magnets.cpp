#include<bits/stdc++.h>
using namespace std;
int main () {
int n,grp=0;
string x;
cin>>n;
char prev;
for(int i=0;i<n;i++){
    cin>>x;
   if(prev == x[0] || i==0){
    grp++;
   }
prev = x[1];
}
cout<<grp;
}
