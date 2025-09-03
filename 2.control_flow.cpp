#include <iostream>
using namespace std;

/// <Summary>
/// To run the program, first compile it:
///     g++ 2.control_flow.cpp -o output/control_flow
/// Then go to output directory. Run:
///     ./control_flow
/// </Summary>
int main()
{
    // We use control flow to make decision.

    // 1. First is if/else-if statement

    int x = 0;
    int y = 0;

    cout << "Enter 2 numbers with a space in-between" << endl;

    cin >> x >> y;

    if (x < y)
    {
        cout << x << " is smaller than " << y << endl;
    }
    else if (x > y)
    {
        cout << x << " is larger than " << y << endl;
    }
    else 
    {
        cout << x << " is the same as " << y << endl;
    }

    return 0;
}