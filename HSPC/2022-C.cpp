#include <bits/stdc++.h>
using namespace std;

int n=0;
int q=0;

vector<vector<string>> v;
vector<int> l;

bool camp(vector<string>&a, vector<string>&b){
    if(a[0]!=b[0]) return a[0]<b[0];
    else return a[1]<b[1];
}

int main()
{
    cin >> n;
    cin >> q;
    for(int i=0; i<n; i++){
        int a;
        vector<string> temp(3);
        cin >> a;
        temp[0] = to_string(a);
        cin >> a;
        temp[1] = to_string(a);
        cin >> temp[2];
        v.push_back(temp);
    }
    for(int i=0; i<q; i++){
        int a;
        cin >> a;
        l.push_back(a);
    }
    //
    sort(v.begin(), v.end(), camp);

    //
    for(auto i : v){
        for(auto j : i){
            cout << j << " ";
        }
        cout << "\n";
    }
}
