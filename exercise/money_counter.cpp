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

    int tenCent = amount / 10;
    amount %= 10;

    cout << "You need " << tenCent << " Ten Cent Coins" << endl;

    int fiveCent = amount / 5;
    amount %= 5;

    cout << "You need " << fiveCent << " Five Cent Coins" << endl;

    int oneCent = amount / 1;
    amount %= 1;

    cout << "You need " << oneCent << " One Cent Coins" << endl; 


    return 0;
}