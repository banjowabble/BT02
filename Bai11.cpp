#include <bits/stdc++.h>
using namespace std;
int main()
{
    int min, max, stepSize;
    cin >> min >> max >> stepSize;
    for (int i=min; i<=max; i+=stepSize)
        cout << i << '\t' << fixed << setprecision(2) << (i-32)*5/9.0 << '\t' << fixed << setprecision(2) << (i-32)*5/9.0+273.15 << '\n';
    return 0;
}
