#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        int a, b, c;
        cin>>a>>b>>c;
        if(a+b==c){
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;
        }
    }
}