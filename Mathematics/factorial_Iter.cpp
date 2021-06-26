#include <iostream>
using namespace std;

int fact(int n)
{
    int count = 1;
    for (int i = 2; i <= n; i++)     //TIME COMPLEXITY =  O(n)
    {
        count = count * i;
    }

    return count;
}

int main()
{
    cout << "Enter a number to find Factorial: ";
    int n;
    cin >> n;
    cout << fact(n) << endl;
}
