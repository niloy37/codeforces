//https://codeforces.com/problemset/problem/617/A
#include<bits/stdc++.h>
using namespace std;
int main () {
int n;
int count=0;

while(cin>>n){
    count = n/5;
    if(n%5!= 0)
        count++;
    cout<<count<<endl;
  }
}
//up1
