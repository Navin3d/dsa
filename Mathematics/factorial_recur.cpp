#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    cout << "Enter a number to find Factorial: ";
    int n;
    cin >> n;
    cout << fact(n) << endl;
}