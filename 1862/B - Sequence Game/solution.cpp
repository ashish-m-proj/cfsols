#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int test=0; test<t; test++){
        int n, g=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=1; i<n; i++){
            if(a[i-1]>a[i]){
                g++;
            }
        }
        cout<<n+g<<endl;
        for(int i=0; i<n; i++){
            if(a[i-1]>a[i] && i>0){
                cout<<a[i]<<" ";
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}