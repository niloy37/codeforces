#include<iostream>
#include<cstdio>

using namespace std;

int main(){

int n;
scanf("%d",&n);
while(n--){
string input;
cin>>input;
int nt = input.size();
if(input[nt-1] == 'o')
    cout<<"FILIPINO"<<endl;
else if (input[nt-1] == 'u')
    cout<<"JAPANESE"<<endl;
 else  
    cout<<"KOREAN"<<endl;

}

    return 0;
}
