#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, g=0, a[4]={0};
        cin>>n;
        a[0]=(n/1000)*1000;
        n%=1000;
        a[1]=(n/100)*100;
        n%=100;
        a[2]=(n/10)*10;
        n%=10;
        a[3]=n;
        for(int j=0; j<4; j++){
            if(a[j]!=0){
                g++;
            }
        }
        cout<<g<<endl;
        for(int j=0; j<4; j++){
            if(a[j]!=0)
                cout<<a[j]<<" ";
            }
        cout<<endl;
    }
}