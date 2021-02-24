#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, sum = 0;
    do {
        cin >> n;
    } while (n <= 0);
    for (int i = 1; ; i++)
    {
        sum += n%10;
        n=n/10;
        if (n==0) break;
    }
    cout << sum;
    return (0);
}
