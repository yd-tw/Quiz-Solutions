#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<int> a;
vector<int> c;

vector<vector<int>> v;

int main()
{
    cin >> n >> m >> k;
    for(int i=0; i<k; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for(int i=0; i<k; i++){
        int temp;
        cin >> temp;
        c.push_back(temp);
    }
    for(int i=0; i<m; i++){
        vector<int> temp;
        for(int i=0; i<3; i++){
            int tmp;
            cin >> tmp;
            temp.push_back(tmp);
        }
        v.push_back(temp);
    }
    //

    cout << "-1";

}
