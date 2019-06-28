#include<bits/stdc++.h>
using namespace std;
int main ( ){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
sort(arr , arr+n);
int c=1;
int current;
int maxCount = 0;


for(int x : arr){
    if(x == current){
        c++;
    }
    else
        c=1;
    if(maxCount < c){
        maxCount = c;
    }

        current = x;
}
cout<<maxCount<<endl;

}
