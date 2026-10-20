#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], gift_recieved_by[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        gift_recieved_by[a[i]]=i;
    }
    for(int i=1; i<=n; i++){
        cout<<gift_recieved_by[i]+1<<" ";
    }
}