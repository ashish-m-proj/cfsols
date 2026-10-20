#include <iostream>
using namespace std;
int main(){
    string n1, n2;
    cin>>n1>>n2;
    int ans[n1.length()];
    for(int i=0; i<n1.length(); i++){
        ans[i]=0;
        if(n1[i]!=n2[i]){
            ans[i]=1;
        }
    }
    for(int i=0; i<n1.length(); i++){
        cout<<ans[i];
    }
}