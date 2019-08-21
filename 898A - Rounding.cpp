#include<iostream>
using namespace std;

int main ()
{
	long long int n;
	cin>>n;
	if(n% 10 == 0)
		cout<<n<<endl;
	else {
		if(n%10 <5){
			cout<<n - (n%10);
		}
		else {
			cout<<n+ (10-n%10);
		}
	}
}
