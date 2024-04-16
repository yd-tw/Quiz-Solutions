#include <bits/stdc++.h>
using namespace std;

int n, q;
vector<int> v;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> q;
    vector<int> b(100);

    for(int i=0; i<q; i++){
        int type = 0;
        int temp = 0;
        cin >> type;

        if(type==1){
            cin >> temp;

            auto pos = find(b.begin(),b.end(),temp);
            while(pos!=b.end()){
                b[pos-b.begin()] = -1;
                pos = find(b.begin(),b.end(),temp);
            }
        }

        if(type==2){
            cin >> temp;
            b.push_back(temp);
            b.push_back(temp-1);
        }
        if(type==3){
            int x, y;
            int f=0;
            cin >> x >> y;
            for(auto i : b){
                if(x<=i && i<y){
                    cout << "NO" << "\n";
                    f=1;
                    break;
                }
            }
            if(f!=1){
                cout << "YES" << "\n";
            }
        }

        /*
        for(auto i : b){
            cout << i << " ";
        }
        cout << "\n";
        */

    }
}
