#include<iostream>
using namespace std;


int main ()
{
    int n;
    cin>>n;
    int ucrime=0;
    int police=0;
    int x;
    while(n--){
        cin>>x;
        if(x == -1){
            if(police == 0){
                ucrime++;
            }
            else {
                police--;
            }
            
        }
        else {
            police+=x;
        }
    }
    cout<<ucrime<<endl;
    return 0;
}
