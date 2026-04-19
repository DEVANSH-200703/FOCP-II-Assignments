#include <bits/stdc++.h>
using namespace std;
string solve(int n, vector<int> arr) {
    sort(arr.begin(), arr.end());
    long long a = 0, b = 0;
    int turn = 0, count = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || arr[i] != arr[i + 1]) count = 1;
        else count++;

        if (count <= 2) {
            if (turn == 0) { a += arr[i]; turn = 1; }
            else { b += arr[i]; turn = 0; }
        }
    }
    return (a > b) ? "Alex" : "Bob";
}
int main() {
    int T, n;
    if (!(cin >> T)) return 0;
    while (T--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        cout << solve(n, v) << endl;
    }
    return 0;
}
