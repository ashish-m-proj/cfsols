#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    long long int x, y;
    cin>>x>>y;
    if(x-y>1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}