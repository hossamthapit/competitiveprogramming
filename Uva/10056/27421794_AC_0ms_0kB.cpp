#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
int dx[] = { 0,0,-1,1,1,-1,-1,1 };
int dy[] = { 1,-1,0,0,1,-1,1,-1 };
#define all(x) x.begin(),x.end()
#define szz(x) int(x.size())
typedef long long ll;
using namespace std;

void file() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    if (freopen("input.txt", "r", stdin));
    if (freopen("output.txt", "w", stdout));
#endif
}


int main() {
    file();
    
    int t;
    cin >> t;
    while (t--) {
        int n, k; double p;
        cin >> n >> p >> k;
        double fail = 1 - p;
        double sucess = p * pow(fail,k-1);
        double ans = sucess;


        for (int i = 0; i < 100; i++) {
            sucess *= pow(fail, n);
            ans += sucess;
        }
        cout << fixed << setprecision(4);
        cout << ans << endl;
    }


}