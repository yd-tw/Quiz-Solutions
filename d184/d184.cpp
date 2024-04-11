#include <iostream>
using namespace std;

int weight = 100;
int object;

int dp[100] = {0};

int main(){
    while(cin >> object){
        int dp[101] = {0};

        for(int i=1; i<=object; i++){
            int v, c;
            cin >> v >> c;

            for(int j=weight; j>=v; j--){
                dp[j] = max(dp[j], dp[j-v] + c);
            }
        }
        cout << dp[weight] << "\n";
    }
}
