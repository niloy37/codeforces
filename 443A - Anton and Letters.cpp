#include<bits/stdc++.h>
using namespace std;
int main () {
    set<char> ch;
    string s;
    getline(cin,s);
    for(int i=1 ; i < (int)s.size()-1; i++){
        if(s[i]>= 'a' && s[i]<='z')
        ch.insert(s[i]);
    }
        cout<<ch.size();
        return 0;
}
