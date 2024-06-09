#include <iostream>
#include <vector>
using namespace std;

#define pii pair<int, int>
#define x first
#define y second

int p, q, r, m;

vector<vector<int>> n(100000);
vector<int> type(100000);
vector<pii> dp(100000);
vector<bool> vis(100000);

pii dfs(int i){
    //cout << i ;

    if(vis[i]==true) return {dp[i].x, dp[i].y};

    pii a = dfs(n[i][0]);
    pii b = {-1, -1};
    if(type[i]!=4) b = dfs(n[i][1]);

    //cout << i << " " << a << "," << b << endl;

    vis[i] = true;
    if(type[i]==1) return dp[i] = {(a.x==1 && b.x == 1), max(a.y, b.y)+1};
    if(type[i]==2) return dp[i] = {(a.x==1 || b.x == 1), max(a.y, b.y)+1};
    if(type[i]==3) return dp[i] = {(a.x != b.x), max(a.y, b.y)+1};
    if(type[i]==4) return dp[i] = {(a.x==0), max(a.y, b.y)+1};
}

int main(){
    cin >> p >> q >> r >> m;

    int a, b;
    for(int i=1; i<=p; i++){
        cin >> dp[i].x;
        vis[i] = true;
    }
    for(int i=p+1; i<=p+q; i++){
        cin >> type[i];
    }
    while(m--){
        cin >> a >> b;
        n[b].push_back(a);
    }
    int ans = 0;
    for(int i=p+q+1; i<=p+q+r; i++){
        dfs(n[i][0]);
        ans = max(ans, dp[n[i][0]].y);
    }
    cout << ans << "\n";
    for(int i=p+q+1; i<=p+q+r; i++){
        cout << dp[n[i][0]].x << " ";
    }
}
