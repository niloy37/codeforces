//every 4th number in fibonacci sequence is divisible by 3 . 
//http://www.math.toronto.edu/mccann/assignments/199S/FibModK.pdf


#include<iostream>
using namespace std;



int main () 
{
    int n,a,b,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b>>n;
        int k = n%3;
        switch(k){
        case 0 : cout<<a<<endl;break;  
        case 1: cout<<b<<endl;break;
        default:
      cout<<(a xor b)<<endl;   
}
    }
}
