#include<iostream>
using namespace std;


int main () 
{
    int q;
    cin>>q;
    while(q--)
    {   
        bool im = false;
        long long int n;
        cin>>n;
        int moves = 0;
        while(n != 1 && !im){
            if(n % 2 == 0){
                n/=2;
                moves++;
            }
            else if(n%3 ==0){
                n = (2*n) /3 ;
                moves++;
            }
            else if ( n% 5 == 0) {
                n = (4*n) / 5;
                moves++;
            }
            else {
                im = true;
            }
        }
        if(im) cout<<"-1"<<endl;
        else cout<<moves<<endl;
    }
}
