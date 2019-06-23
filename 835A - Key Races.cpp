//g++  5.4.0

#include <iostream>
#include<bits/stdc++.h>
#define sf cin
#define pf cout
using namespace std;

int main()
{
    int s;
    sf>>s;
    int t1 = 0, t2 = 0;
    int a1,b1,a2,b2;
    sf>>a1>>a2>>b1>>b2;
    t1 += b1;
    t2 += b2;
    t1 += (s*a1);
    t2 += (s*a2);
    t1 += b1;
    t2 += b2;
    
    if(t1 < t2 ) pf<<"First";
    else if (t1>t2) pf<<"Second";
        else pf<<"Friendship";
    
    
}
