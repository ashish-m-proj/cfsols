#include <iostream>
using namespace std;
int main(){
  string s;
  cin>>s;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
      cout<<"YES";
      break;
    }
    else if(i==s.length()-1){
      cout<<"NO";
    }
  }
}