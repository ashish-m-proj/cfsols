#include <iostream>
using namespace std;
int main(){
    int matrix[5][5], row, column, r, c;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin>>matrix[i-1][j-1];
        }
    }
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(matrix[i-1][j-1]==1){
                row=i-1;
                column=j-1;
            }
        }
    }
    r=row-2;
    c=column-2;
    if(r<0){
        r=-r;
    }
    if(c<0){
        c=-c;
    }
    cout<<r+c;
}