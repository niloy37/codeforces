#include<iostream>
#include<map>
#include<cstdio>
using namespace std;

int main () 
{
    map<string,string> mp;
    mp.insert(make_pair("red","Reality"));
    mp.insert(make_pair("purple","Power"));
      mp.insert(make_pair("green","Time"));
        mp.insert(make_pair("orange","Soul"));
          mp.insert(make_pair("yellow","Mind"));
            mp.insert(make_pair("blue","Space"));
            map<string,string>::iterator itr;
            int n;
            scanf("%d",&n);
            string input[n];
            string output[6];
            int c=0;
            for(int i=0 ; i<n ;i++){
                cin>>input[i];
            }
            for( itr = mp.begin() ; itr !=mp.end(); itr++){
                bool f = false;
                for(int i=0; i < n; i++){
                    if(itr->first == input[i]){
                        f= true;
                        break;
                    }
                }
                if(!f){
                    output[c] = itr->second; 
                    c++;
                }
            }
            cout<<c<<endl;
            for(int i=0 ; i<c;i++){
                cout<<output[i]<<endl;
            }
  
    return 0;
}
