#include <iostream>
#include <math.h>
#include <iomanip>
#include <windows.h>

#include "A.h"
#include "S.h"
#include "var.h"

using namespace std;

using namespace nsA;
using namespace nsS;
using namespace nsVar;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "X_поч: "; cin >> X_start;
    cout << "X_кін: "; cin >> X_end;
    cout << "dX: "; cin >> dX;
    cout << "eps: "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(10) << "ln(1 - x)" << " |"
        << setw(7) << "S" << "    |     "
        << setw(5) << "n" << " |  "
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = X_start;

    while (x <= X_end) {
        S();
        cout << "|" << setw(7) << setprecision(1) << x << " |"
            << setw(10) << setprecision(4) << log(1 - x) << " |"
            << setw(10) << setprecision(4) << -s << " |"
            << setw(10) << n << " |"
            << endl;
        x += dX;
    }

    cout << "-------------------------------------------------" << endl;
    cin.get();

    return 0;
}