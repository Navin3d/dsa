#include <iostream>
using namespace std;

void numberSpell(int n )        //201
{
    if(n==0)  return;
    string spell[] = {"zero","one" , "two" , "three", "four" , "five", 
                       "six", "seven" , "eight", "nine"};
    
    int lastDigit = n%10;
   numberSpell(n/10);
   cout<<spell[lastDigit]<<" ";
    
    
}

int main()
{
    int n;
    cin>>n;
    numberSpell(n);
    return 0;
}
