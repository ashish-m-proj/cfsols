#include <iostream>
#include <set>
using namespace std;
int main(){
    int n, n1, n2;
    cin>>n>>n1;
    set<int> a;
    for(int i=0; i<n1; i++){
        int k;
        cin>>k;
        a.insert(k);
    }
    cin>>n2;
    for(int i=0; i<n2; i++){
        int k;
        cin>>k;
        a.insert(k);
    }
    if(a.size()==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}