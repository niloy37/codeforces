#include<iostream>
using namespace std;



int main ()

{
    int n;
    cin>>n;
    int arr[n];
    int count = 0;
    int maxCount = 0;
    int prev = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(prev <= arr[i] ){
            count++;
            if(count > maxCount){
                maxCount = count;
            }
        }
        else {
            count = 1;
        }
        prev = arr[i];
    }
    cout<<maxCount;
    return 0;
}
