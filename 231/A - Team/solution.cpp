#include <iostream>
using namespace std;
int main(){
    int n, i, j, k, a, solvable=0;
    cin>>n;
    for(a=1; a<=n; a++){
        cin>>i>>j>>k;
        if(i+j+k>=2){
            solvable++;
        }
    }
    cout<<solvable;
}