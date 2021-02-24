#include <iostream>
using namespace std;
int main()
{
	double a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    double d = a1*b2-a2*b1, dx = c1*b2-c2*b1, dy = a1*c2-a2*c1;
    if (d == 0)
        if (dx-dy != 0) cout << "PT Vo nghiem";
        else cout << "PT vo so nghiem";
    else cout << "PT co 2 nghiem: " << dx/d << ", " << dy/d ;
	return 0;
}
