#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, f; 
    cin >> N; 
    vector<int> tem(101);
    vector<int> imprimir;
    while(N--) { 
        cin >> f;
        if (tem[f] == 0){
            tem[f]++;
            imprimir.push_back(f);
         } else {
            for (int i = 0; i < imprimir.size(); i++){
                cout << imprimir[i] << " ";
            }
            cout << "\n";
        }
    }
}