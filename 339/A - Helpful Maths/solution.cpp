#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b[(a.length()+1)/2];
    for(int i=0; i<a.length(); i+=2){
        b[i/2]=a[i]-48;
    }
    sort(b, b+(a.length()+1)/2);
    for(int i=0; i<(a.length()+1)/2; i++){
        cout<<b[i];
        if(i<(a.length()+1)/2-1){
            cout<<"+";
        }
    }
}