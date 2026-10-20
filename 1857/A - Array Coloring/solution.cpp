#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int test=0; test<t; test++){
        int n, eve=0, odd=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%2==0){
                eve++;
            }
            else{
                odd++;
            }
        }
        if(odd%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}