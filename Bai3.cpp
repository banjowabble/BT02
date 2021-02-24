#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b, c; cin >> a >> b >> c;
    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
        if (a==b && b==c && a==c) cout << "Tam giac deu";
        else if ((a==b) || (b==c) || (a==c)) cout << "Tam giac can";
        else if ((sqrt(a*a+b*b)==c)||(sqrt(b*b+c*c)==a)||(sqrt(a*a+c*c)==b)) cout << "Tam giac vuong";
        else cout << "Tam giac thuong";
        cout << "\nChu vi tam giac: " << a + b + c;
    }
    else cout << "khong phai tam giac";
    return 0;
}
