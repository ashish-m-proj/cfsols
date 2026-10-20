#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n, i, length;
    string str, first, last;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>str;
        length=str.length();
        if(length>10){
            first=str[0];
            last=str[length-1];
            cout<<first<<length-2<<last<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }
}