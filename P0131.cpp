#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    int menor = INT_MAX;
    int maior = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0) menor = a[i];
        else {
            if (a[i] < menor) menor = a[i];
        }
        maior = max(maior, abs(menor - a[i]));
    }
    cout << maior << '\n';
    return 0;
}