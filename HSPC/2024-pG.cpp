#include <bits/stdc++.h>
using namespace std;

int a[4] = {};
int x[4] = {};
int out = 0;

int main()
{
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    cin >> x[0] >> x[1] >> x[2] >> x[3];

    for(int i=0; i<4; i++){
        if(a[i]%2==1){
            out += x[0];
            break;
        }
    }

    for(int i=0; i<4; i++){
        if(a[i]==2 || a[i]==3 || a[i]==9){
             out += x[1];
             break;
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(a[i]+a[j]==2 ||a[i]+a[j]==3 ||a[i]+a[j]==9){
                 out += x[2];
                 cout << out;
                 return 0;
            }
        }
    }

    cout << out;

}
