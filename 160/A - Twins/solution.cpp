#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n, g=0;
  cin>>n;
  int c[n], taken=0, left=0;
  for(int i=0; i<n; i++){
    cin>>c[i];
    left+=c[i];
  }
  sort(c, c+n);
  for(int i=0; i<n; i++){
    if(taken<=left){
      taken+=c[n-i-1];
      left-=c[n-i-1];
      g++;
    }
    else{
      break;
    }
  }
  cout<<g;
}