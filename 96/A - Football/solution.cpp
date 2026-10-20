#include <iostream>
using namespace std;
int main(){
  string s;
  int g=0, h=0;
  cin>>s;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='1'){
      g++;
      h=0;
    }
    else{
      h++;
      g=0;
    }
    if(g==7 || h==7){
      cout<<"YES";
      break;
    }
  }
  if(g<7 && h<7){
    cout<<"NO";
  }
}