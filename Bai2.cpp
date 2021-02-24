#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x; int y;
    cin >> x >> y;
    if (x!=0)
        if (y!=0)
        {
            double a=x;
            for (int i=1; i<abs(y); i++) a*=x;
            if (y>0) cout << a; else cout << 1/a;
        }
        else cout << 1;
    else
        if (y<0) cout << "inf";
        else if (y>0) cout << 0;
        else cout << 1;
    cout << '\n' << pow(x,y);
	return 0;
}
