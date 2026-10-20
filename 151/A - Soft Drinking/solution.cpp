#include <iostream>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int g=k*l/nl;
    int h=c*d;
    int i=p/np;
    if(g<=h && g<=i){
        cout<<g/n;
    }
    else if(h<=g && h<=i){
        cout<<h/n;
    }
    else if(i<=h && i<=g){
        cout<<i/n;
    }
}