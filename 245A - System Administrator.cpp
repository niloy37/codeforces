#include<map>
#include<string>
#include<iostream>


using namespace std;

int main (int argc , char** argv){
	int n;
	cin>>n;
	
int ca=0,cb=0,ta=0,tb=0;;
	while(n--){
		int t,x,y;
		cin>>t>>x>>y;
		if(t == 1){
			ta+=x;
			ca+=10;	
		}
		else{
			tb+=x;
			cb+=10;
		}
}
		
	if(ta >= (ca/2))cout<<"LIVE"; else cout<<"DEAD";
	cout<<endl;
	if(tb >= (cb/2))cout<<"LIVE"; else cout<<"DEAD";
} 
