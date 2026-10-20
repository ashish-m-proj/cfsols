#include <iostream>
using namespace std;
int main(){
    int n, k, time, g=0;
    cin>>n>>k;
    time=240-k;
    for(int i=0; 1; i++){
        time=time-5*(i+1);
        if(time<0 || i>=n){
            break;
        }
        else{
            g++;
        }
    }
    cout<<g;
}