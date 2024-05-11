#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second

int n;
pair<int, int> pos = {0, 0};
int l=0, r=0, b=0;
string s = "R";

int main() {
    fast;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        pair<int, int> p;
        cin >> p.x >> p.y;

        if(pos.y < p.y) s+= "U";
        if(pos.y > p.y) s+= "D";
        if(pos.x < p.x) s+= "R";
        if(pos.x > p.x) s+= "L";

        if(s[i-1]=='U'){
            if(s[i]=='D') b++;
            if(s[i]=='R') r++;
            if(s[i]=='L') l++;
        }
        if(s[i-1]=='D'){
            if(s[i]=='U') b++;
            if(s[i]=='R') l++;
            if(s[i]=='L') r++;
        }
        if(s[i-1]=='R'){
            if(s[i]=='U') l++;
            if(s[i]=='D') r++;
            if(s[i]=='L') b++;
        }
        if(s[i-1]=='L'){
            if(s[i]=='U') r++;
            if(s[i]=='D') l++;
            if(s[i]=='R') b++;
        }

        pos = p;
        //cout << pos.x << " " << pos.y << " " << s[i];

    }

    cout << l << " " << r << " " << b;

}
