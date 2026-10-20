#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int test=0; test<t; test++){
        int n, sum=0;
        cin>>n;
        int a[n-1];
        for(int i=0; i<n-1; i++){
            cin>>a[i];
            sum+=a[i];
        }
        cout<<-sum<<endl;
    }
}