#include <iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

int main(int argc, char **argv) {
	int m,n;
	cin>>m>>n;
	int sq[m];
	int cd[n];
	for(int i=0;i<m;i++){
		cin>>sq[i];
	}
	for(int i=0;i<n;i++){
		cin>>cd[i];
	}
	
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(sq[i] == cd[j]){
					cout<<sq[i]<<" ";
				}
			}
		}
		
		
		
	
	return 0;
}
