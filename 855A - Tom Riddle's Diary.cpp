#include <iostream>
#include<set>
using namespace std;
int main() {
set<string> mySet;
int n;
cin>>n;
int c=1;
string names;
while(n--)
{
    cin>>names;
    mySet.insert(names);
    if(mySet.size() == c)
    {
        c++;
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
}
