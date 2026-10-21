#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int test=0; test<t; test++){
        int n, k, x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<endl<<n<<endl;
            for(int i=0; i<n; i++){
                cout<<"1 ";
            }
            cout<<endl;
        }
        else if(x==1 && k==2){
            if(n%2==0){
                cout<<"YES"<<endl<<n/2<<endl;
                for(int i=0; i<n/2; i++){
                cout<<"2 ";
            }
            cout<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(k==1){
            cout<<"NO"<<endl;
        }
        else{
            if(n%2==0){
                cout<<"YES
"<<n/2<<endl;
                for(int i=0; i<n/2; i++){
                    cout<<"2 ";
                }
                cout<<endl;
            }
            else{
                cout<<"YES
"<<(n-1)/2<<endl;
                for(int i=0; i<(n-3)/2; i++){
                    cout<<"2 ";
                }
                cout<<"3
";
            }
        }
    }
}