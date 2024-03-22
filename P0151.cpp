#include <bits/stdc++.h>

using namespace std;
int n;
int lis(vector<int> &a) {
    vector<int> LIS;
    for (int i = 0; i < n; i++) {
        auto it = upper_bound(LIS.begin(), LIS.end(), a[i]);
        if (it == LIS.end())
            LIS.push_back(a[i]);
        else
            *it = a[i];
    }
    return LIS.size();
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << n - lis(a) << "\n";
    return 0; 
}
