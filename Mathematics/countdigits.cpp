//The C++ Program to count the number of digits in an integer by ITERATIVE Method
#include <iostream>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    cout << "Enter the number to count the Digits: ";
    int n;
    cin >> n;
    cout << countDigit(n) << endl;
}
