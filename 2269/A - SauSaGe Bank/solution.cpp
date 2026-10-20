#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,k, val=1;
        cin>>n>>k;
        for(int j=0; j<n-k+1; j++){
            val=val*2;
        }
        if(n-k==0){
            cout<<2*k<<endl;
        }
        else{
            cout<<val+2*(k-1)<<endl;
        }
    }    
}