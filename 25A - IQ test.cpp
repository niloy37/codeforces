#include<iostream>
using namespace std;
int main ()
{
    int n;
    int arr[101];
    cin>>n;
    for(int i=0; i < n ; i++){
        cin>>arr[i];
    }
    int even=0,odd=0;
    for(int i = 0 ; i < 3; i++){
    if(arr[i]%2 == 0)
        even++;
    else odd++;
    }

    bool f  = (even>odd);
    if(f){
        for(int i=0 ; i<n ; i++){
            if(arr[i]%2 != 0 ){
                cout<<i+1;
                break;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                cout << i + 1;
                break;
            }
        }
    }
    return 0;
}
//upt
