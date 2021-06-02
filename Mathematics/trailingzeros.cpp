//THE OPTIMIZED SOLUTIONS TO FIND THE TRAILING ZERO(S) IN THE FACTORIAL OF A NUMBER

#include <iostream>
using namespace std;

int countTrailingZeros(int n)
{
    int res = 0;

    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + (n / i);
    }

    return res;
}
int main()
{
    cout << "Enter a number to find the trailing zero(s) in the Factorial of it: ";
    int number;
    cin >> number;
    cout << countTrailingZeros(number);

    return 0;
}
