#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int test=0; test<t; test++){
        int n, g=0;
        cin>>n;
        int a[n];
        bool check=true;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=1; i<n; i++){
            if(a[i-1]!=a[i]){
                check=false;
                break;
            }
        }
        sort(a, a+n);
        if(!check){
            for(int i=0; i<n; i++){
                int a0=a[n-1];
                if(a[n-i-1]==a0){
                    g++;
                }
            }
            int b[n-g], c[g];
            for(int i=0; i<n-g; i++){
                b[i]=a[i];
            }
            for(int i=0; i<g; i++){
                c[i]=a[n-i-1];
            }
            cout<<n-g<<" "<<g<<endl;
            for(int i=0; i<n-g; i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<g; i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}