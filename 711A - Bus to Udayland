#include<bits/stdc++.h>
using namespace std;
int main () {
int n;
bool f = false;
cin>>n;
vector<string> s;
string st;
for(int i = 0;i<n;i++){
    cin>>st;
    s.push_back(st);

}

for(int i=0;i<n;i++){

    if(s.at(i)[0] == 'O' && s.at(i)[1] =='O' || s.at(i)[3] =='O' && s.at(i)[4]=='O'){
        if(s.at(i)[0] == 'O' && s.at(i)[1] =='O'){
           s.at(i)[0] = '+';
           s.at(i)[1] = '+';
           f=true;
           break;
        }
        else if(s.at(i)[3] =='O' && s.at(i)[4]=='O'){
           s.at(i)[3] = '+';
           s.at(i)[4] = '+';
           f=true;
           break;
        }
    }
}

if(f==false){
    cout<<"NO"<<endl;
}
else {
    cout<<"YES"<<endl;
    for(string st : s){
        cout<<st<<endl;
    }
}

}
