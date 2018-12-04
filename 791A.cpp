//https://codeforces.com/problemset/problem/791/A


#include<bits/stdc++.h>


using namespace std;
int main () {

int a;
int b;
cin>>a;
cin>>b;
int year =0;

while(a<=b){
    a=a*3;
    b=b*2;
    year++;
  }
cout<<year;
}
