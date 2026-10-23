#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int arr[n];
        int a=0;
        int b=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        for(int k=0;k<n;k++){
            if(arr[k]==0){
                a++;
            }
            else if(arr[k]==1){
                if(a>b){
                    b = a;  
                }
                a = 0;
            }
            if(a>b){
                b = a;  
            }
        }
        cout<<b<<endl;
    }
}