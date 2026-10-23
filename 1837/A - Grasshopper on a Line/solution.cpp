#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int test=0; test<t; test++){
        long long int x, k;
        cin>>x>>k;
        int a[x]={0}, end;
        for(int j=0; 1; j++){
            for(int i=0; 1; i++){
                if((x-i)%k!=0){
                    a[j]=x-i;
                    x=x-a[j];
                    break;
                }
            }
            if(x==0){
                end=j+1;
                break;
            }
        }
        cout<<end<<endl;
        for(int i=0; i<end; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}