#include <iostream>
using namespace std;
int sumOfSquares(int x) {
    int sum = 0;
    while (x > 0) {
        int digit = x % 10;
        sum += digit * digit;
        x /= 10;
    }
    return sum;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count[200] = {0};
        long long answer = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            for (int j = 0; j < 100; j++) {
                x = sumOfSquares(x);
            }
            answer += count[x];
            count[x]++;
        }
        cout << answer << endl;
    }
}