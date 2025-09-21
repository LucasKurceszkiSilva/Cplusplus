#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        int cross = 0, temp;

        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (temp < y) cross++;
        }
        for (int i = 0; i < m; i++) {
            cin >> temp;
            if (temp < x) cross++;
        }

        cout << cross << endl;
    }
    return 0;
}
