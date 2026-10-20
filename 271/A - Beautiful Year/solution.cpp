#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
    int n;
    set<char> p;
    string m;
    cin>>n;
    for(int i=n+1; 1; i++){
        m=to_string(i);
        p.insert(m.begin(), m.end());
        if(p.size()==4){
            cout<<i;
            break;
        }
        p.clear();
    }
}