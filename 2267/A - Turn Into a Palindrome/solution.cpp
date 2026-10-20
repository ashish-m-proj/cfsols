#include <iostream>
using namespace std;
int main(){
    int n, len, g=0;
    cin>>n;
    string c;
    char s;
    for(int i=0; i<n; i++){
        cin>>len>>s>>c;
        for(int j=0; j<len; j++){
            if(c[j]!=c[len-j-1]){
                g++;
                if(c[j]==s){
                    c[len-j-1]=s;
                }
                else{
                    c[j]=s;
                }
            }
        }
        cout<<g<<endl;
        g=0;
    }
}