#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, sum=0, prod=1, sol=0; 
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
            prod*=a[i];
        }
        while(sum<0 || prod!=1){
            sol++;
            sum+=2;
            prod*=-1;
        }
        cout<<sol<<endl;
    }
}