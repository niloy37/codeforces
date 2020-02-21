#include<iostream>
using namespace std;

int main (int argc , char**argv){
	int x,y,z;
	cin>>x>>y>>z;
	int c=0;
	if(x-y+z >= 0 && x-y-z <= 0 && z !=0){
		cout<<"?";
	}
	else if(x-y+z < 0){
		cout<<"-";
	}
	else if(x-y-z>0){
		cout<<"+";
	}
	else cout<<"0";
}
//edited
