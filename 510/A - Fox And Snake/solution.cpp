#include <iostream>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    for(int i=1; i<=m; i++){
        if(i%4==0 || (i+2)%4!=0){
            cout<<"#";
            }
        for(int j=0; j<n-1; j++){
            if(i%2==0){
                cout<<".";
            }
            else{
                cout<<"#";
            }
        }
        if((i+2)%4==0){
            cout<<"#";
        }
        cout<<endl;
    }
}