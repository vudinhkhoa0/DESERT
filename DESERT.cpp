#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long sum = 0;
    int n, c;
    cin >> n >> c;
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        sum = sum + x;
        if (sum >= c)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}

