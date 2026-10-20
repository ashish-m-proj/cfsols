#include <iostream>
#include <set>
using namespace std;
int main(){
    int n, f=0;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s=="Tetrahedron") f+=4;
        if(s=="Cube") f+=6;
        if(s=="Octahedron") f+=8;
        if(s=="Dodecahedron") f+=12;
        if(s=="Icosahedron") f+=20;
    }
    cout<<f;
}