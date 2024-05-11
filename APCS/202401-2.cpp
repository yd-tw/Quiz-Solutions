#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0);cin.tie(0);

int m, n, k;
vector<int> rd;

vector<vector<char>> v(20, vector<char>(20, '-'));
string s;
pair<int, int> p = {1, 1};

int main(){
    cin >> m >> n >> k;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < k; i++) {
        int temp;
        cin >> temp;
        rd.push_back(temp);
    }
    //
    p.second = m;
    for(int i = 0; i < k; i++) {
        pair<int, int> newpos = p;
        if(rd[i]==0) {
            newpos.second--;
        }
        if(rd[i]==1) {
            newpos.first++;
        }
        if(rd[i]==2) {
            newpos.first++;
            newpos.second++;
        }
        if(rd[i]==3) {
            newpos.second++;
        }
        if(rd[i]==4) {
            newpos.first--;
        }
        if(rd[i]==5) {
            newpos.first--;
            newpos.second--;
        }

        if(v[newpos.second][newpos.first] != '-') p = newpos;

        s += v[p.second][p.first];
    }

    cout << s << "\n";
    int t = 0;
    string temp;
    for(auto i : s){
        if(find(temp.begin(), temp.end(), i) == temp.end()){
            temp+=i;
            t++;
        }
    }
    cout << t;
}
