// 1a converting pseudocodes into c++ programs
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double cost, revenue, amount, profit, loss;

    cout << "Enter total cost: ";
    cin >> cost;

    cout << "Enter total revenue ";
    cin >> revenue;
    amount = revenue - cost;
    if (amount > 0)
    {
        profit = amount;
        cout << "The profit is GHC";
        cout << profit;
    }
    else
    {
        loss = amount;
        cout << "The loss is GHC";
        cout << loss;
    }

    return 0;
}

// 1a converting pseudocodes into c++ programs
