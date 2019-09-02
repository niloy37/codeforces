//g++  5.4.0

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr [n];
    for(int i=0; i<n;i++){
     cin>>arr[i];
     }
    sort(arr,arr+n);
    int sum=0;
    int i = n-1;
    int k=0;
    while(sum < m){
        sum+=arr[i];
        i--;
        k++;
    }
    cout<<k<<endl;
}
