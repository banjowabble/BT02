#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i=0; i<=300; i+=20)
        cout << i << '\t' << fixed << setprecision(2) << (i-32)*5/9.0 << '\t' << fixed << setprecision(2) << (i-32)*5/9.0+273.15 << '\n';
    return 0;
}
