//tanya and stairways adn
#include<map>
#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[1001];
   int stairC = 1;
   int larg[1001];
   int k=0;
   for(int i=0 ; i< n; i++){
       cin>>arr[i];
   }
   for(int i=1; i<n; i++){
       if(arr[i] == 1){
           larg[k] = arr[i-1];
           k++;
           stairC++;
   }
   }
   larg[k] = arr[n-1];
   cout<<stairC<<endl;
   for(int i=0; i <= k; i++){
       cout<<larg[i]<<" ";
   }

}//scc
