//https://codeforces.com/problemset/problem/785/A
//Codeforces , round #404 Div 2. Problem(A)
//Solution to Anton and Polyhedrons , c++
#include<bits/stdc++.h>
using namespace std;
//main method
int main(){
int n;
cin>>n;
string s[n+1];
for(int i=0;i<n+1;i++){
    getline(cin,s[i]);
}
int faces=0;
for(int i=0;i<n+1;i++){
    if(s[i]=="Tetrahedron")
        faces=faces+4;
    if(s[i]=="Cube")
        faces=faces+6;
        if(s[i]=="Octahedron")
        faces=faces+8;
        if(s[i]=="Dodecahedron")
        faces=faces+12;
        if(s[i]=="Icosahedron")
        faces=faces+20;
}
cout<<faces;
}
