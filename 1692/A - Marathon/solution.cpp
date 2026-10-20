#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        int a[4];
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        int k=a[0], g=0;
        sort(a, a+4);
        for(int i=0; i<4; i++){
            if(a[i]>k){
                g++;
            }
        }
        cout<<g<<endl;
    }
}