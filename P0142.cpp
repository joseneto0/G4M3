#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> frequencia(62, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        frequencia[a[i]]++;
    }
    sort(a.begin(), a.end());
    for (int i = n - 1; i >= 0; i--)
    {
        if (frequencia[a[i] + 1] == 0)
        {
            frequencia[a[i]]--;
            a[i]++;
            frequencia[a[i]]++;
        }
        else if (frequencia[a[i]] > 1 && a[i] - 1 >= 0)
        {
            frequencia[a[i]]--;
            a[i]--;
            frequencia[a[i]]++;
        }
    }
    ll soma = 0;
    frequencia.assign(62, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        ll mult = 1;
        if (frequencia[a[i]] == 0)
        {
            for (int j = 0; j < a[i]; j++)
            {
                mult *= 2;
            }
            soma += mult;
            frequencia[a[i]]++;
        }
    }
    cout << soma << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}