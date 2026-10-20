#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int min=a[n-1], max=a[0], min_index=n-1, max_index=0;
    for(int i=0; i<n; i++){
        if(max<a[i]){
            max=a[i];
            max_index=i;
        }
        if(min>a[n-i-1]){
            min=a[n-i-1];
            min_index=n-i-1;
        }
    }
    if(max_index>min_index){
        cout<<max_index+n-2-min_index;
    }
    else{
         cout<<max_index+n-1-min_index;
    }
}