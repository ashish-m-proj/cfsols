#include <iostream>
#include <set>
using namespace std;
int main(){
    int k, l, m, n, d;
    set<int> a;
    cin>>k>>l>>m>>n>>d;
    for(int i=k; i<=d; i+=k){
        a.insert(i);
    }
    for(int i=l; i<=d; i+=l){
        a.insert(i);
    }
    for(int i=m; i<=d; i+=m){
        a.insert(i);
    }
    for(int i=n; i<=d; i+=n){
        a.insert(i);
    }
    cout<<a.size();
}