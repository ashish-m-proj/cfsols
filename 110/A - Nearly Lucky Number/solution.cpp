#include <iostream>
using namespace std;
int main(){
    string n;
    int k=0;
    cin>>n;
    for(int i=0; i<n.length(); i++){
        if(n[i]==52 || n[i]==55){
            k++;
        }
    }
    if(k==7 || k==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}