#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter values of a,b and c : " << endl;
    cin >> a >> b >> c;

    if (a == 0.0)
    {
        cout << "The Equation is undefined" << endl;
        return 1;
    }
    double x1, x2;

    x1 = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);
    cout << "x1 = " << x1 << " and x2 =" << x2 << endl;
    return 0;
}