#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int test=0; test<t; test++){
        int n;
        cin>>n;
        int a[n], g[n-1];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++){
            g[i]=a[i+1]-a[i];
        }
        sort(g, g+n-1);
        if(g[0]%2==0 && g[0]>=0){
            cout<<g[0]/2+1<<endl;
        }
        else if(g[0]%2==1 && g[0]>=0){
            cout<<g[0]/2+1<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
}