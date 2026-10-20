#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a[200005];
        int b[200005]={0};
        int g=-1;
        for(int j=0;j<n;j++){
            if(s[j]=='1'){
                g++;
                a[g]=j+1;
            }
            else if(s[j]=='2'){
                if(g>=0){
                    b[a[g]]=1;
                    g--;
                }
                else{
                    b[j+1]=1;
                }
            }
            else{
                b[j+1]=1;
            }
        }
        int k=0;
        for(int j=1;j<=n;j++){
            if(b[j]==0){
                k++;
            }
        }
        cout<<k<<endl;
        for(int j=1;j<=n;j++){
            if(b[j]==0){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}