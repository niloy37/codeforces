#include<iostream>
using namespace std;

int main ()
{
    int a,b;
    cin>>a>>b;
    int t=0;
    if(a>b){
        t=b;
        a-=b;
        b=0;
    }
    else if(b > a){
        t=a;
        b-=a;
        a=0;
    }
    else {
        t= a;
        a=b=0;
    }
    int t2=0;
    if( a != 0){
        t2 = (a/2);
    }
    else {
        t2 = b/2;
    }
    cout<<t<<" "<<t2;
}
