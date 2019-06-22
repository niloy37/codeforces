//https://codeforces.com/problemset/problem/935/A


#include<bits/stdc++.h>
using namespace std;
//main function
int main () {
int n;
cin>>n;
int c=1;
for(int i=2;i<n;i++){
    int x = n-i;
    if(x%i==0){
        c++;
    }
}
cout<<c;
}
