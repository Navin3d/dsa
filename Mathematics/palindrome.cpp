#include <iostream>
using namespace std;

bool palindrome(int n)              //FUN FACT: A SINGLE DIGIT NUMBER IS ALWAYS A PALINDROM:)
{
    int temp = n;
    int result = 0;
    while (temp != 0)
    {
        int lastdigit = temp % 10;
        result = result * 10 + lastdigit;
        temp = temp / 10;
    }
    return (n == result);
}

int main()
{
    cout << "Enter a number to check if it is palindrome or not: ";
    int n;
    cin >> n;
    if (palindrome(n))
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;
}
