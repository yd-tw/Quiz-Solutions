#include <iostream>
using namespace std;

int n=0;
int dp[101] = {0};

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        int w, v;
        cin >> w >> v;
        for(int j=100; j>=0; j--){
            if(w<=j) dp[j] = max(dp[j], dp[j-w] + v);
        }
    }
    cout << dp[100];
}
