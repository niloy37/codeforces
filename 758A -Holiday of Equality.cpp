#include<bits/stdc++.h>
using namespace std;
int main () {
int x,w;
cin>>x;
vector <int> y;
int maxx = 0;
for(int i=0;i<x;i++){
    cin>>w;
    y.push_back(w);
    maxx = max(w,maxx);
}
int counter=0;
int z;
for(int i=0;i<x;i++){
    z= maxx-y.at(i);
    counter+=z;
}
cout<<counter;
}
