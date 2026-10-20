#include <iostream>
using namespace std;
int main(){
    string s;
    int cap=0, sml=0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            cap++; 
        }
        else{
            sml++;
        }
    }
    for(int i=0; i<s.length(); i++){
        if(sml<cap && s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
        else if(sml>=cap && s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
    cout<<s;
}