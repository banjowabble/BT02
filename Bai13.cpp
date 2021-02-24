#include <bits/stdc++.h>
using namespace std;
bool testPrimeNumber (int n)
{
    if (n<2) return false;
    for (int i=2; i<=sqrt(n); i++)
        if (n%i==0) return false;
    return true;
}
bool testPerfectNumber(int n)
{
    int s=1;
    for (int i=2; i<=n/2; i++)
        if (n%i==0) s+=i;
    if (s==n) return true;
    return false;
}
bool testSquareNumber (int n)
{
    int s=sqrt(n);
    return (s*s==n && n>0);
}
int main()
{
    int n;
    cin >> n;
    for (int i=2; i<=n; i++)
        if (testPrimeNumber(i)) cout << i << ' ';
    cout << '\n';
    for (int i=2; i<=n; i++)
        if (testPerfectNumber(i)) cout << i << ' ';
    cout << '\n';
    for (int i=2; i<=n; i++)
        if (testSquareNumber(i)) cout << i << ' ';
    return 0;
}
