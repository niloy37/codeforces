#include<iostream>
#include<string>
using namespace std;
int main () 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int s,a,b,c;
        cin>>s>>a>>b>>c;
        long long int at = s/c;
        long long int free = at/a;
        cout<<at+free*b<<endl;
    }
}
//githu
