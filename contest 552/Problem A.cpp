#include<bits/stdc++.h>
using namespace std;
int main () {
int a,b,c,d,great;
cin>>a;
great =a;
cin>>b;
if(great<b){
    great=b;
}
cin>>c;
if(great<c){
    great=c;
}
cin>>d;
if(great<d){
    great=d;
}
if(a-great==0){
    cout<<great-c<<" "<<great-b<<" "<<great-d<<endl;
}
if(b-great==0){
    cout<<great-c<<" "<<great-a<<" "<<great-d<<endl;
}
if(c-great==0){
    cout<<great-a<<" "<<great-b<<" "<<great-d<<endl;
}
if(d-great==0){
    cout<<great-c<<" "<<great-b<<" "<<great-a<<endl;
}



}
