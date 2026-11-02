#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        bool check=true;
        if((c-a)>(d-b) || d<b || (d<=b && a<c)){
            check=false;
            cout<<-1<<endl;
            continue;
        }
        else{
            cout<<2*(d-b)-(c-a)<<endl;
        }
    }
}