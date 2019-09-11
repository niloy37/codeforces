#include<iostream>
using namespace std;

int main () 
{
    int s,x;
    cin>>s>>x;
    int tdolls = 0;
    while(s != 0){
        s/=x;
        tdolls++;
    }
    cout<<tdolls;
    return 0;
}
