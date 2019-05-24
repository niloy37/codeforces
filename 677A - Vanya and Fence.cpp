#include<bits/stdc++.h>
using namespace std;
int main(){
int n,h;
cin>>n>>h;
int width=0,height;
for(int i=0;i<n;i++){
    cin>>height;
    if(height> h)
        width+=2;
    else
        width+=1;
}
cout<<width;
}
