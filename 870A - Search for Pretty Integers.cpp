#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    int ar[n];
    int ar2[m];
    int f_l= 10;
    int s_l= 10;
    int temp;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<m;i++){
        cin>>ar2[i];
    }
    sort(ar,ar+n);
    sort(ar2,ar2+m);
    f_l = ar[0];
    s_l = ar2[0];

    bool print = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ar[i] == ar2[j])
            {
                cout << ar[i];
                print = false;
                break;

            }
        }
        if(!print) break;
    }
    if(print) {
        if (f_l == s_l)
            cout << f_l;
        else if (f_l < s_l)
            cout << f_l << s_l;
        else cout << s_l << f_l;
    }
    return 0;
}
