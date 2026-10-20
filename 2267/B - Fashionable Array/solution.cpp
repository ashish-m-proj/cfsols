#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int freq[101] = {};
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
 
        int ans[100];
        int pos = 0;
 
        while (pos < n) {
            // Find the largest remaining value
            int x = -1;
 
            for (int i = 100; i >= 1; i--) {
                if (freq[i] > 0) {
                    x = i;
                    break;
                }
            }
 
            int cnt = freq[x];
 
            // Put all copies of x first
            for (int i = 0; i < cnt; i++) {
                ans[pos++] = x;
            }
 
            freq[x] = 0;
 
            // Put at most cnt copies of every smaller value
            for (int i = x - 1; i >= 1; i--) {
                int take = min(freq[i], cnt);
 
                for (int j = 0; j < take; j++) {
                    ans[pos++] = i;
                }
 
                freq[i] -= take;
            }
        }
 
        // Print answer for this test case
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
 
        cout << '
';
    }
 
    return 0;
}