#include<bits/stdc++.h>
using namespace std;
int main () {
int x;
cin>>x;
int k=0;
int d;
for(int i=0;i<x;i++){
    cin>>d;
    k+=d;
}
float f = (float)k/x;
cout<<f;
}
