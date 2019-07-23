#include<iostream>
using namespace std;
long long int calc(long long int x){
   long long int s ;
   if(x%2 == 0){
    s = x/2;
   }
   else {
    s= (x/2)+1;
    s*=-1;
   }
    return s;
}



int main (int argc, char** argv) {
    long long int x;
    cin>>x;
    cout<<calc(x);
    return 0;
}
