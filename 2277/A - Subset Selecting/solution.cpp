#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        int ans=0, p=0;
        for(int i=0; i<n; i++){
            if(a[i]<=ans){
                p++;
                if(a[i]==ans && p>=k){
                    ans++;
                    p-=k;
                }
            }
        }
        cout<<ans<<endl;
    }
}