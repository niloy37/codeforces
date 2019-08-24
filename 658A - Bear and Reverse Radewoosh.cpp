#include <iostream>
using namespace std;
int main() {
 int n,x;
 cin>>n>>x;
 int p[n];
 int c[n];
 for(int i=0;i<n;i++)
     cin>>p[i];
 for(int i=0;i<n;i++)
     cin>>c[i];
 int tt_limak=0, tt_rade=0;
 int point_limak=0,point_rad=0;
 for(int i=0; i<n;i++){
     tt_limak += c[i];
     point_limak += max(0, (p[i]- (x*tt_limak)));
 }
 for(int i=n-1; i>=0;i--){
     tt_rade+=c[i];
     point_rad += max(0,(p[i] - (x*tt_rade)));
 }
 if(point_limak > point_rad) {
     cout << "Limak";
 }
     else if(point_limak < point_rad){
         cout<<"Radewoosh";
     }
         else{
             cout<<"Tie";
         }
}
