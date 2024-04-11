#include <bits/stdc++.h>
using namespace std;

int x;
vector<pair<int, int> > v;

bool compare(pair<int, int> a, pair<int, int> b){
    return a.first*a.first+a.second*a.second > b.first*b.first+b.second*b.second;
}

int main(){
    cin >> x;
    for(int i=0; i<x; i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), compare);

    cout << v[1].first << " " << v[1].second;
}
