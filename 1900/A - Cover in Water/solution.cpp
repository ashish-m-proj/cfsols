#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int test=0; test<t; test++){
    int n, g=0;
    string s;
    bool check=false;
    cin>>n>>s;
    for(int i=0; i<n; i++){
      if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
        g+=2;
        i+=2;
        cout<<g<<endl;
        check=true;
        break;
      }
    }
    if(!check){
      for(int i=0; i<n; i++){
        if(s[i]=='.' && s[i+1]=='.'){
          g+=2;
          i+=1;
        }
        else if(s[i]=='.'){
          g+=1;
        }
        else{
          continue;
        }
      }
      cout<<g<<endl;
    }
  }
}