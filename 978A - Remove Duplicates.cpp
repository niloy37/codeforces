#include<iostream>
#include<set>
using namespace std;

int main () 
{
    int n;
    cin>>n;
    int arr[1001];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    set<int> mySet;
   int setSize = 0;
   int aru[1001];
   int uniq = 0;
    for(int rev= n-1; rev>=0; rev--)
    {   
        
        mySet.insert(arr[rev]);
        if(setSize != (int)mySet.size()){
            setSize++;
            aru[uniq++] = arr[rev];
        }

    }
    cout<<uniq<<endl;
    for(int i=uniq-1; i>=0 ;i--){
        cout<<aru[i]<<" ";
    }

}
