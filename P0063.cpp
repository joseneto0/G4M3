#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    bool pa = false;
    vector<int> val(n);
    for (int i = 0; i < val.size(); i++){
        cin >> val[i];
    }
    sort(val.begin(), val.end());
    int r = val[1] - val[0];
    for (int i = 0; i < val.size(); i++){
        if (i < val.size() - 1){
            if (val[i+1] - val[i] == r){
                pa = true;
            } else {
                pa = false;
                break;
            }
        } else {
            if (val[val.size() - 1] - val[val.size() - 2] == r){
                pa = true;
            } else {
                pa = false;
            }
        }
        
    }
    if (pa == true){
        cout << "TRUE" << '\n';
    } else {
        cout << "FALSE" << '\n';
    }
    return 0;
}