#include<bits/stdc++.h>
using namespace std;
int main() {
int a,b,c,d;

while(cin>>a>>b>>c>>d){
    string s;
    cin>>s;
    int totalCal=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            totalCal+=a;
        }
       else if(s[i]=='2'){
            totalCal+=b;
        }
       else if(s[i]=='3'){
            totalCal+=c;
        }
       else if(s[i]='4'){
            totalCal+=d;
        }
      }
    cout<<totalCal<<endl;
}
}
