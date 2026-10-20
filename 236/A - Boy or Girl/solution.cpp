#include <iostream>
#include <set>
using namespace std;
int main(){
    string a;
    int n;
    cin>>a;
    set<char> letters = {};
    for(int i=0; i<a.length(); i++){
        letters.insert(a[i]);
    }
    n=letters.size();
    if(n%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}