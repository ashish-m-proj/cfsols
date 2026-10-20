#include <iostream>
using namespace std;
int main(){
    string s, t, a;
    cin>>s>>t;
    a.resize(s.length());
    for(int i=0; i<s.length(); i++){
        a[i]=s[s.length()-1-i];
    }
    if(t==a){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}