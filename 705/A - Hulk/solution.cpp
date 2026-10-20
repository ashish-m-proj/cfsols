#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for (int j = 1; j < n; j++) {
        if (j % 2 != 0)
            cout << "I hate that ";
        else
            cout << "I love that ";
    }
 
    if (n % 2 != 0)
        cout << "I hate it";
    else
        cout << "I love it";
}