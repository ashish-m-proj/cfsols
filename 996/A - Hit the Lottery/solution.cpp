#include <iostream>
using namespace std;
int main(){
    int n, n100, n20, n10, n5;
    cin>>n;
    n100=n/100;
    n%=100;
    n20=n/20;
    n%=20;
    n10=n/10;
    n%=10;
    n5=n/5;
    n%=5;
    cout<<n100+n20+n10+n5+n;
}