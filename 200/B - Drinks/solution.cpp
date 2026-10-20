#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    double perc, sum=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<setprecision(10);
    perc=sum/n;
    cout<<perc;
}