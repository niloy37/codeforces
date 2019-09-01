#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int oddCount=0;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] %2 != 0)
            oddCount++;
    }
    cout<<min(oddCount, n-oddCount)<<endl;
}
