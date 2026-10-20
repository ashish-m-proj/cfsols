#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int test=0; test<t; test++){
    int n; 
    cin>>n; 
    int a[n], a1, a2=-1, c1=0, c2=0;
    bool check=true;
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    for(int i=0; i<n; i++){
      a1=a[0];
      if(a[i]!=a1){
        a2=a[i];
        break;
      }
    }
    for(int i=0; i<n; i++){
      if(a[i]==a1){
        c1++;
      }
      else if(a[i]==a2){
        c2++;
      }
      else{
        check=false;
        c1=0; c2=5;
        break;
      }
    }
    if(c1-c2>1 || c2-c1>1){
      check=false;
    }
    if(n==2 || check || a2==-1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}