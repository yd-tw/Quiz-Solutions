#include <bits/stdc++.h>
using namespace std;

int x, n;

int rm  = -100, lm = 100;
int rt, lt;

int main()
{
    cin >> x >> n;

    for(int i=0; i<n; i++){
        int a; cin >> a;
        if(a<x){
            lm = min(lm, a);
            lt++;
        }
        else{
            rm = max(rm, a);
            rt++;
        }
    }
    if(rt<lt) cout << lt << " " << lm;
    else cout << rt << " " << rm;
}
