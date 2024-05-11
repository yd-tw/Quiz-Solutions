#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

int n = 0;
vector<pair<int, int>> v;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        pair<int, int> p;
        cin >> p.x >> p.y;
        v.push_back(p);
    }
    sort(v.begin(), v.end());

    for (auto i : v) {
        cout << i.x << " " <<  i.y << "\n";
    }
}
