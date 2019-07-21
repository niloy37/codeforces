#include<iostream>
using namespace std;
bool checkFibo(int i ){
    int fibo []  {0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987};
    for(int z : fibo){
        if(z==i)
            return true;
    }
    return false;
}
int main () {
    int n;
    cin>>n;
    
        for(int i=1;i<=n;i++){
        if(checkFibo(i))
            cout<<"O";
        else cout<<"o";
    }

}
