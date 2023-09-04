#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; 
    cin >> n;
    vector<vector<char>> matriz(n, vector<char>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }
    bool success = false;;
    for (int i = 0; i < n; i++){
        if (i > 0 && !success){
            break;
        }
        for (int j = 0; j < n; j++){
            if (matriz[i][j] == 'M'){
                if (i - 1 >= 0){
                    if (matriz[i-1][j] != '-'){
                        success = true;
                    } else {
                        success = false;
                        break;
                    }
                }
                if (j - 1 >= 0){
                    if (matriz[i][j-1] != '-'){
                        success = true;
                    } else {
                        success = false;
                        break;
                    }
                }
                if (j+1 <= n-1){
                    if (matriz[i][j+1] != '-'){
                        success = true;
                    } else {
                        success = false;
                        break;
                    }
                }
                if (i+1 <= n-1){
                    if (matriz[i+1][j] != '-'){
                        success = true;
                    } else {
                        success = false;
                        break;
                    }
                }
            }
        }
    }
    if (success){
        cout << "SUCCESS" << '\n';
    } else {
        cout << "FAIL" << '\n';
    }
}