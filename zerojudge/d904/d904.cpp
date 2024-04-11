#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int c = 0;
int n = 0;
vector<int> N = {};
vector<int> L = {};

int one(int);

int main(){
    int o = 0;

    cin >> c;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        N.push_back(x);
    }

    L.push_back(0);
    for(int i=1; i<=c; i++){
        L.push_back(one(i));
    }

    cout << L.at(c);
}

int one(int x){
    int k = 0;
    int m = 32768;

    if(0 < count(N.begin(), N.end(), x)) return 1;

    for(int i=1; i<x; i++){
        k = L.at(x-i) + L.at(i);
        if(m > k) m = k;
    }
    return m;
}
