#include<iostream>
using namespace std;
int main () 
{   ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    int rt = 240 - k;
    bool can = true;
    int i=1;
    int pbcount=0;
    if(rt < 5*i){
            can = false;
        }
    while(can){
        int time = 5*i;
        i++;
      
        rt -= time;
        pbcount++;
          if(i > n) break;
        if(rt < 5*i){
            can = false;
        }
    }
    cout<<pbcount;

    return 0;
}
