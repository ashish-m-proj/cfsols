#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int test=0; test<t; test++){
        int n, x;
        cin>>n>>x;
        int a[n], s[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++){
            s[i]=a[i+1]-a[i];
        }
        int ans=a[0];
        for(int i=0; i<n-1; i++){
            if(s[i]>ans){
                ans=s[i];
            }
        }
        cout<<max(ans, 2*(x-a[n-1]))<<endl;
    }
}