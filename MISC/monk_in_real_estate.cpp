#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, e, i, f, s, count;
    cin >> t;
    while (t--)
    {
        cin >> e;
        long long int arr[10001] = {0};
        for (i = 0; i < e; i++)
        {
            cin >> f >> s;
            arr[f] = 1;
            arr[s] = 1;
        }
        count = 0;
        for (i = 0; i <= 10001; i++)
        {
            if (arr[i] == 1)
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}