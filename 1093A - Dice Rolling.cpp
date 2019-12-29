#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        if(n<=7)cout<<"1"<<endl;
        else {
            if(n%7 != 0)
            cout<<(n/7+1)<<endl;
            else cout<<(n/7)<<endl;
        }
    }
}
//verdict : AC2
