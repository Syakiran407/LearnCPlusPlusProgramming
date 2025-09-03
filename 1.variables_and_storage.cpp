#include <iostream>
using namespace std;

/// <Summary>
/// To run the program, first compile it:
///     g++ 1.variables_and_storage.cpp -o output/variables_and_storage
/// Then go to output directory. Run:
///     ./variables_and_storage
/// </Summary>
int main()
{

    // 1 byte is 8 bits

    char c = 'A';

    cout << "the size of char c is " << sizeof(c) << " bytes" << endl; 

    int n = 10;

    cout << "the size of int n is " << sizeof(n) << " bytes" << endl;

    double d = 10.00;

    cout << "the size of double d is " << sizeof(d) << " bytes" << endl;

    return 0;
}