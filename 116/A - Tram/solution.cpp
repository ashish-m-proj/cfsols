#include <iostream>
using namespace std;
int main(){
    int n, in, out, ppl=0, max;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>out>>in;
        ppl+=in;
        ppl-=out;
        s[i]=ppl;
    }
    max=s[0];
    for(int i=0;i<n;i++){
        if(s[i]>max){
            max=s[i];
        }
    }
    cout<<max;
}