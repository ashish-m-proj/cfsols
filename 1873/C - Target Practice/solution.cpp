#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int test=0; test<t; test++){
        string s[10];
        int score=0;
        for(int i=0; i<10; i++){
            cin>>s[i];
            for(int j=0; j<10; j++){
                if(s[i][j]=='X'){
                    score+=min({i+1, j+1, 10-j, 10-i});
                }
            }
        }
        cout<<score<<endl;
    }
}