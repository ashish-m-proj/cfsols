#include <iostream>
using namespace std;
int main(){
    int n, g=1, m;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>m;
        a[i]=m;
        if(i>0 && a[i]!=a[i-1]){
            g++;
        }
    }   
    cout<<g;
}