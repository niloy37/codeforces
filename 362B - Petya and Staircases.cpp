#include<iostream>
#include<algorithm>
using namespace std;
int main () 
{
    int n,m;
    cin>>n>>m;
    int ar[m];
    bool p = true;
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+m);
    if(ar[0] == 1 || ar[m-1] == n){
        p=false;
    }
    else{
        int cons=0;
        int c=0;
        for(int counter =1; counter<=n;counter++){
            if(c == m) break;
            if(counter == ar[c] )
            {
                c++;
                cons++;
            }
            else 
            {
                cons =0;
            }
            if(cons == 3)
            {
                p=false;
            }
        }
    }
    if(p)cout<<"YES";
    else cout<<"NO";
}
