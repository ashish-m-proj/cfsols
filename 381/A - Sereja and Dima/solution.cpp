#include <iostream>
using namespace std;
int main(){
    int n, s=0, d=0, lb=0; 
    cin>>n;
    int a[n], ub=n-1;
    for(int i=0; i<n; i++){
        cin>>a[i];
        }
    for(int i=0; i<n; i++){
        if(i%2==0){
            if(a[lb]>a[ub]){
                s+=a[lb];
                lb+=1;
            }
            else{
                s+=a[ub];
                ub-=1;
            }
        }
        if(i%2!=0){
            if(a[lb]>a[ub]){
                d+=a[lb];
                lb+=1;
            }
            else{
                d+=a[ub];
                ub-=1;
            }
        }
    }
    cout<<s<<" "<<d;
}