#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if (n<2) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n; cin >> n;
    if (n<0) cout << "Not a fibonacci number";
    else
    {
        int t=0;
        while (fibonacci(t)<n) t++;
        if (fibonacci(t)-n != 0)
        {
            cout << "Not a fibonacci number\n";
            for (int i=0; i<t; i++)
                if (i-2) cout << fibonacci(i) << ' ';
        }
        else
        {
            cout << "A fibonacci number\n";
            for (int i=0; i<=t; i++)
                if (i-2) cout << fibonacci(i) << ' ';
        }
    }
    return 0;
}
