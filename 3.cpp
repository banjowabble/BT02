#include <iostream>
using namespace std;
int main ()
{
    int n; cin >> n;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-(i+1); j++) cout << ' ';
        for (int j=n-(i+1); j<n+i; j++) cout << '*';
        for (int j=n+1; j<n+4; j++) cout << ' ';
        cout << '\n';
    }
    return 0;
}
