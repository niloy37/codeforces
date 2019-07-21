#define rizvee_mota return 0
#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int c=0;
    if(n %2 == 0){
        cout<< (n/2)*n<<endl;
    }
    else {
        int z = (n/2)+1;
        int k = (n/2);
        cout<<z*((n/2)+1) + k*(n/2)<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c%2==0)
                cout<<'C';
            else cout<<'.';
            c++;
        }
        if(n%2==0)
        c--;
        cout<<endl;
    }

    rizvee_mota;
}
