#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n>>s;
        int number=n/2;
        for(int i=0; i<n/2+1; i++){
            if(s[i]==s[n-i-1]){
                number=i;
                break;
            }
        }
        cout<<n-2*number<<endl;
    }
}