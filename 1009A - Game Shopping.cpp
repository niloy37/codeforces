#include<iostream>
using namespace std;
int main ()
{
	int c,a;
	cin>>c>>a;
	int game[c];
	int wallet[a];
	for(int i=0;i<c;i++)
		cin>>game[i];
	for(int i=0;i<a;i++)
		cin>>wallet[i];
		int k=0,t=0;
		for(int i=0;i<c;i++){
			if(k < a){
			if(game[i] <= wallet[k]){
				t++;
				k++;
			}
		}
		}
		cout<<t;
}
