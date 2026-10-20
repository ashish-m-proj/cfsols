#include <iostream>
using namespace std;
int main(){
    int a,b, year=0;
    cin>>a>>b;
    for(int i=1; 1; i++){
        a*=3;
        b*=2;
        year++;
        if(a>b){
            break;
        }
    }
    cout<<year;
}