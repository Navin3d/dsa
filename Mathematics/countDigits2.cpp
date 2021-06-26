// TO COUNT THE NUMBER OF DIGITS BY LOGARITHMIC METHOD

#include <iostream>
using namespace std;

int countDigit(int n);

int main()
{
    cout << "Enter the number to count the Digits: ";
    int n;
    cin >> n;
    cout << countDigit(n) << endl;

}


int countDigit(int n){
 return floor(log10(n) + 1);     
}

/*
 n  = 123
 floor(log10(n) + 1);
 log10(123) = 2.08 
 floor(2.08 + 1) = floor(3.08) = 3
 
 o/p = 3
 
 */
