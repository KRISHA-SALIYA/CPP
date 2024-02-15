#include <iostream>
#include <string.h>
using namespace std;
class A
{
    int m, k;
    int m1, k1;

public:
    void input()
    {
        cout << "Enter meter :";
        cin >> m;
        cout << "Enter km :";
        cin >> k;
        cout << "Enter Meter1 :";
        cin >> m1;
        cout << "Enter Km1 :";
        cin >> k1;
    }

    void operator+()
    {
        int Km, Km1;
        int M, M1;
        Km = k + k1;
        M = m + m1;

        Km1 = Km / 1000;
        M1 = M / 1000;
        Km1 += M1;
       cout << "KM :" << Km + Km1 << "  METER :" <<  M + M1  << endl;
    }
};
int main()
{
    A a1;
    a1.input();
    a1.operator+();
}