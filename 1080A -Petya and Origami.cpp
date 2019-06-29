#include<bits/stdc++.h>
using namespace std;


int main () {
int n , k;
cin>>n>>k;

int r = 2 ,g = 5 , b = 8;
long long int t = 0;

    r=r*n;
    if(r%k == 0)
    t = t + (r/k);
    else t = t+ (r/k)+1;

    b=b*n;
    if(b%k == 0)
    t = t + (b/k);
    else t = t+ (b/k)+1;


    g=g*n;
    if(g%k == 0)
    t = t + (g/k);
    else t = t+ (g/k)+1;

cout<<t<<endl;
}
