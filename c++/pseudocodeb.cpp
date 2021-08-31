// 1b converting pseudocodes into c++ programs
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double payrate, hours, overtimehours, overtimepay, totalpay;

    cout << "Enter payrate: ";
    cin >> payrate;

    cout << "Enter hours ";
    cin >> hours;

    if (payrate < 10 && hours > 40)
    {
        overtimehours = hours - 40;
        cout << "The overtime hours is ";
        cout << overtimehours;
        cout << "hrs" << endl;
        overtimepay = overtimehours * 1.5 * payrate;
        cout << "The overtimepay is GHC";
        cout << overtimepay << endl;
        totalpay = 40 * payrate + overtimepay;
        cout << "The totalpay is GHC";
        cout << totalpay << endl;
    }
    else
    {
        totalpay = hours * payrate;
        cout << "The totalpay is GHC";
        cout << totalpay << endl;
    }

    return 0;
}
