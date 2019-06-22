//https://codeforces.com/problemset/problem/867/A


#include<bits/stdc++.h>

using namespace std;
int main () {
int x;
cin>>x;


std::string s(x, 'a');
for(int i=0;i<x;i++){
    cin>>s[i];
}
char lastplace;
char now;
int fsan=0;
int fsea=0;
lastplace=s.at(0);

for(int i=0;i<x;i++){
    now = s.at(i);
    if(lastplace == now){
        continue;
    }
    if(lastplace != now){
        if(lastplace == 'S'){
            fsea++;
        }
        else fsan++;
    }
    lastplace=s.at(i);



}
(fsea<=fsan)?cout<<"NO":cout<<"YES";
}





