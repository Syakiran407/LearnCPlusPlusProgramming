#include <iostream>
#include <cmath>  // for round
using namespace std;

int main()
{

    cout << "Hello from money counter program!" << endl;

    double money;

    cout << "Enter the money amount: " << endl;

    cin >> money;

    int amount = round(money * 100);

    cout << "You have " << amount << endl;

    int tenDollar = amount / 1000;
    amount %= 1000;

    cout << "You need " << tenDollar << " Ten Dollar Notes" << endl;

    int fiveDollar = amount / 500;
    amount %= 500;

    cout << "You need " << fiveDollar << " Five Dollar Notes" << endl;

    int oneDollar = amount / 100;
    amount %= 100;

    cout << "You need " << oneDollar << " One Dollar Notes" << endl;

    return 0;
}