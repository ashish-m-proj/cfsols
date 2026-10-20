#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string n;
    set<char> a;
    cin>>n;
    for(int i=0; i<n.length(); i++){
        if(n[i]>='A' && n[i]<='Z'){
            n[i]+=32;
        }
        a.insert(n[i]);
    }
    if(a.size()==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}