#include<iostream>
#include<string.h>
#include<cstdio>

using namespace std;

/*

C++ 
Author
@Havoc

*/


int main () {
    //generating all true values 
    int true_values[12] = {4,7,47,74,44,444,447,474,477,777,774,744};
    bool flag = false;
    int number;
    cin>>number;
    
    //loop to check
    for(int i =0 ; i < 12; i++){
        if(number == true_values[i] || number % true_values[i]==0){
        flag = true;
        break;
        }
    }
    (flag == true)? cout<<"YES" : cout<<"NO";

    return 0;
}
