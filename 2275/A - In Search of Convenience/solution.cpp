#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    int x0, y0, r;
    cin>>x0>>y0>>r;
    cout<<x0+r<<" "<<y0<<endl; 
  }
}