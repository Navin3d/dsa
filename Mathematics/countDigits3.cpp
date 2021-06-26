// TO COUNT THE NUMBER OF DIGITS BY RECURSIVE METHOD

#include <iostream>
using namespace std;

int countDigit(int n){
  if(n==0)
       return 0;
  else
      return 1+ countDigit(n/10);
}

int main()
{
    cout << "Enter the number to count the Digits: ";
    int n;
    cin >> n;
    cout << countDigit(n) << endl;
}
