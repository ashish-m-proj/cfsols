#include <iostream>
using namespace std;
int main(){
    long long k, w, n, cost=0;
    cin>>k>>w>>n;
    for(int i=1; i<=n; i++){
        cost=cost+k*i;
    }
    if (cost-w<0){
        cout<<"0";
    }
    else{
    cout<<cost-w;
    }
}