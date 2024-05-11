#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

int n;
vector<pair<int, int>> v;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        pair<int, int> p;
        cin >> p.x;
        p.y = 1;
        v.push_back(p);

        cin >> p.x;
        p.y = -1;
        v.push_back(p);
    }

    //
    sort(v.begin(), v.end());

    int dis = 0;
    for (int i = 1; i < v.size(); i++) {
        v[i].y = v[i-1].y + v[i].y;
        if (v[i-1].y > 0) dis += v[i].x - v[i-1].x;
    }

    cout << dis << "\n";

    /*
    for (auto i : v) {
        cout << i.x << "," << i.y << "\n";
    }
    */
}
