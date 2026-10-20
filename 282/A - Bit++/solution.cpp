#include <iostream>
using namespace std;
int main(){
    int n, x=0;
    string code;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>code;
        if(code=="X++" || code=="++X"){
            x++;
        }
        else if(code=="X--" || code=="--X"){
            x--;
        }
    }
    cout<<x;
}