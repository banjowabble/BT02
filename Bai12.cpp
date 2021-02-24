#include <bits/stdc++.h>
using namespace std;
bool testSquareNumber (int n)
{
    int s=sqrt(n);
    return (s*s==n && n>0);
}
int main()
{
    int n;
    cin >> n;
    cout << ((testSquareNumber(n)) ? "A square number" : "Not a square number");
    return 0;
}
