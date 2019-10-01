#include<iostream>
using namespace std;
int main (int argc, char** argv){
    int t;
    cin>>t;
    while(t--){

    int n;
    cin>>n;
    int arr[101];
    //take input and sum
    int sum=0;
    for(int i=0 ; i < n ; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum % n == 0){
        cout<<sum/n<<endl;
    }
    else {
        cout<<(sum/n)+1<<endl;
    }
    }

    
    return 0;
}
