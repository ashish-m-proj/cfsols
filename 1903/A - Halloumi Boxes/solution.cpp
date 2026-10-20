#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        bool check=true;
        for(int l=0; l<n-1; l++){
                if(a[l]>a[l+1]){
                    check=false;
                    break;
                }
            }
        if(k>1 || check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}