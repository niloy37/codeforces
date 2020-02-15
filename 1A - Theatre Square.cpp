#include<bits/stdc++.h>
using namespace std;


int main () {
 long  long int n,m,a;

cin>>n>>m>>a;
long long int c1 = 0,c2 = 0;
if(n%a == 0){
    c1 = n/a;
}
else {
    c1 = n/a;
    c1++;
}

if(m%a == 0){
    c2 = m/a;
}
else {
    c2= m/a;
    c2++;
}
long long int ans = c1*c2;
cout<<ans<<endl;

}
//ch1 jfif
