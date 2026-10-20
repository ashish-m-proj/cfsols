#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int a, b;
        cin>>a>>b;
        if(a<=b){
            cout<<"-1"<<endl;
        }
        else{
            cout<<min(b, a-b)<<endl;
        }
    }
}