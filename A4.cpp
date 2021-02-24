
#include<bits/stdc++.h>
using namespace std;
bool isLeap(int y)
{
    if (y%100 != 0 && y%4 == 0 || y %400 == 0)
        return true;

    return false;
}

int findElapsedDays(int d, int m, int y)
{
    int eDays = d;

    switch (m - 1)
    {
    case 11:
        eDays += 30;
    case 10:
        eDays += 31;
    case 9:
        eDays += 30;
    case 8:
        eDays += 31;
    case 7:
        eDays += 31;
    case 6:
        eDays += 30;
    case 5:
        eDays += 31;
    case 4:
        eDays += 30;
    case 3:
        eDays += 31;
    case 2:
        eDays += 28;
    case 1:
        eDays += 31;
    }

    if (isLeap(y) && m > 2)
        eDays += 1;

    return eDays;
}

void findDateFromEDays(int eDays, int y, int *d, int *m)
{
    int month[13] = { 0, 31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31 };

    if (isLeap(y))
        month[2] = 29;

    int i;
    for (i = 1; i <= 12; i++)
    {
        if (eDays <= month[i])
            break;
        eDays = eDays - month[i];
    }

    *d = eDays;
    *m = i;
}

void addDays(int d1, int m1, int y1, int x)
{
    int eDays1 = findElapsedDays(d1, m1, y1);
    int remainedDays = isLeap(y1)?(366-eDays1):(365-eDays1);

    int y2, eDays2;
    if (x <= remainedDays)
    {
        y2 = y1;
        eDays2 = eDays1 + x;
    }

    else
    {
        x -= remainedDays;
        y2 = y1 + 1;
        int y2days = isLeap(y2)?366:365;
        while (x >= y2days)
        {
            x -= y2days;
            y2++;
            y2days = isLeap(y2)?366:365;
        }
        eDays2 = x;
    }

    int m2, d2;
    findDateFromEDays(eDays2, y2, &d2, &m2);

    cout << d2 << '/' << m2 << '/' << y2;
}

int main()
{
    int d, m, y; char c;
    cin >> d >> c >> m >> c >> y;
    int x;
    cin >> x;
    addDays(d, m, y, x);

    return 0;
}
