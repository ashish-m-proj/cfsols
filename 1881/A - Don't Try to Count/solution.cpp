#include <iostream>
#include <string>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int test=0; test<t; test++){
    int n, m, g=0;
    string x, s;
    cin>>n>>m>>x>>s;
    for(int i=0; i<9; i++){
      size_t pos=x.find(s);
      if(pos!=string::npos){
        cout<<i<<endl;
        break;
      }
      else{
        x.append(x);
      }
      g=i;
    }
    if(g==8){
      cout<<"-1"<<endl;
    }
  }
}