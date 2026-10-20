#include <iostream>
using namespace std;
int main(){
    int t, l=0, g=0;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;           //g is the number of police officerss available
        cin>>n;          //l is the number of crimes
        if(n == -1) {
            if(g > 0)
                g--;
            else
                l++;
        }
        else {
            g += n;
        }
    }
    cout<<l;
}