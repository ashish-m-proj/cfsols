#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1; i<11; i++){
        int cost=n*i;
        if(cost%10==k || cost%10==0){
            cout<<i;
            break;
        }
    }    
}