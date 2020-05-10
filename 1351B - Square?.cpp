#include<iostream>
#include<string.h>
#include<cstdio>



using namespace std;

int main () 
{
    int a,b,c,d;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(a+c == b && b == d || a+d == b && b==c || b+c == a && a==d || b+d == a && a==c){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
