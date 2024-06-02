#include <iostream>
#include <string>
using namespace std;

int n, a;
int v[50][50] = {0};
int r[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
string s = "";

int main() {
    cin >> n >> a;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> v[i][j];
        }
    }

    int x = n/2;
    int y = n/2;
    for(int i=1; i<=n; i++){
        for(int j=0; j<2; j++){
            for(int k=1; k<=i; k++){
                s += to_string(v[x][y]);
                y += r[a][0];
                x += r[a][1];

                if(i==n && k==n) {
                    cout << s;
                    return 0;
                }
            }
            a = (a+1)%4;
        }
    }
}
