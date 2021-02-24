#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double tmp;
    cin >> n >> tmp;
    double min=tmp, max=tmp;
    for (int i=1; i<n; i++)
    {
        cin >> tmp;
        if (tmp > max) max=tmp;
        if (tmp < min) min=tmp;
    }
    cout << max << ' ' << min;
    return 0;
}
