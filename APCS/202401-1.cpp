#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0);cout.tie(0);

bool camp(pair<int, int> a, pair<int, int> b){
    if(a.first*a.first+a.second*a.second > b.first*b.first+b.second*b.second) return 1;
    else return 0;
}

int n = 0;
vector<pair<int,int>> v(50);

int main() {
    fast;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        cin >> v[i].second;
    }
    sort(v.begin(), v.end(), camp);

    cout << v[1].first << " " << v[1].second;
}
