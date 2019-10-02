#include<iostream>
#include<set>

using namespace std;

int main ()
{
    int n;
    cin>>n;
    set<int> s;
    while(n--){
        int x;
        cin>>x;
        if(x != 0 ){
            s.insert(x);
        }
    }
    cout<<s.size();
    return 0;
}
