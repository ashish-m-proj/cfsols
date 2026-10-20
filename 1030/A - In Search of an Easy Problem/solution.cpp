#include <iostream>
using namespace std;
int main(){
    int n, d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d;
        if(d==1){
            cout<<"HARD";
            break;
        }
        else if(i==n-1){
            cout<<"EASY";
        }
    }
}