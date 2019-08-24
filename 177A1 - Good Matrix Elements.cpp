#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int matrix[n][n];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
            if(i == j || i==(n/2) ||j == (n/2) ||(i+j) == (n-1) )
            {
                sum+= matrix[i][j];
            }
        }
    }
    cout<<sum<<endl;
}
