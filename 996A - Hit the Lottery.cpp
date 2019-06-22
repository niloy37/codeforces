//https://codeforces.com/problemset/problem/996/A
#include<bits/stdc++.h>


using namespace std;
int main () {
int n;
cin>>n;
int bills=0;
while(n>0){
    if(n>=100){
        n=n-100;
        bills++;
    }
    if(n<100&&n>=20){
        n=n-20;
        bills++;
    }
    if(n<20&&n>=10){
        n=n-10;
        bills++;
    }
    if(n<10 && n>=5){
        n=n-5;
    bills++;
    }
    if(n<5&& n>=1){
        n=n-1;
        bills++;
    }
}
cout<<bills;
}
