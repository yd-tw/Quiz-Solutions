#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int abs(int);

int n;
int r;

vector<int> px(2500);
vector<int> py(2500);

int o = 0;

map<string, int> m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> r;

    for(int i=0; i<n; i++){
        cin >> px[i];
        cin >> py[i];
    }

    int i=0;
    for(int i=0; i<n; i++){
        for(int y=py[i]-r; y<=py[i]+r; y++){
            for(int x=px[i]-r; x<=px[i]+r; x++){
                int pos = abs(x-px[i])*abs(x-px[i]) + abs(y-py[i])*abs(y-py[i]);
                if(pos<=r*r) m[to_string(x)+","+to_string(y)]++;
            }
        }
    }

    int o=0;
    for(auto i : m){
        if(i.second%2==1) o++;
    }
    cout<< o;
}

int abs(int x){
    if(x<0) return x*-1;
    else return x;
}
