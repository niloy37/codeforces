#include<iostream>
#include<map>
using namespace std;

int main () 
{
    int n;
    cin>>n; 
    cin.clear();
    string s;
    cin>>s;
    int ones = 0 , zeros = 0;
    for(int i =0 ; i< n ;i++)
    {
        if(s[i] == 'z') zeros++;
        else if (s[i]== 'n') ones++;
    }
    for(int i=0 ; i < ones ; i++){
        if(i== (ones-1) && zeros == 0){
            cout<<1;
        }
        else cout<<1<<" ";
    }
    for( int i= 0; i<zeros ;  i++){
        if( i == zeros-1) cout<<0;
       else  cout<<0<<" ";
    }
    return 0;
}
