T.CC = O(N + N)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for( int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int l = 0, r = 0;
    int max_len = 0, sum = 0;
    while(r < n){
        sum = sum + v[r];
        while( sum > k ){
            sum = sum - v[l];
            l = l + 1;
        }
        if( sum <= k ){
            max_len = max( max_len, r - l + 1);
        }
        r = r + 1;
    }
    cout << max_len;
    return 0;
}
