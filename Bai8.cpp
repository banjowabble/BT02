#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a, b, c;
    cin >> a >> b >> c;
    double d = b*b-4*a*c;
    if (d==0) cout << -b/(2*a);
    else if (d>0) cout << (-b-sqrt(d))/(2*a) << '\n' << (-b+sqrt(d))/(2*a);
    else cout << -b/(2*a) << '-' << sqrt(-d)/(2*a) << 'i' << '\n'
                  << -b/(2*a) << '+' << sqrt(-d)/(2*a) << 'i';
    return 0;
}
