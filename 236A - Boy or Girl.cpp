
#include<bits/stdc++.h>
using namespace std;


int main () {
string s;
cin>>s;
char c [101];
c[0] = '\0';
int currentsize=0;

for(char ch : s){
	bool flag = false;
	for(int i = 0 ; i <= currentsize;i++){
		if(ch ==c[i]){
			flag = true;
			break;
		}
	}

		if(flag == false) {
			c[currentsize] = ch;
			currentsize++;
		}




}
if(currentsize % 2 == 0) cout<<"CHAT WITH HER!"<<endl;
else cout<<"IGNORE HIM!"<<endl;
}
