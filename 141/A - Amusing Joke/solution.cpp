#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string a, b, c;
    int g=0;
    cin>>a>>b>>c;
    int d[a.length()+b.length()], e[c.length()];
    for(int i=0; i<a.length(); i++){
        d[i]=a[i];
    }
    for(int i=0; i<b.length(); i++){
        d[a.length()+i]=b[i];
    }
    for(int i=0; i<c.length(); i++){
        e[i]=c[i];
    }
    sort(d, d+a.length()+b.length());
    sort(e, e+c.length());
    for(int i=0; i<a.length()+b.length(); i++){
        if(d[i]==e[i]){
            g++;
        }
    }
    if(c.length() == a.length() + b.length()){
        if(g==a.length()+b.length()){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
}