#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long int a, b, n;
        cin>>a>>b;
        if(a>b && b!=0){
            cout<<(b-a%b)%b<<endl;
        }
        else{
            cout<<b-a<<endl;
        }
    }
}