//TIME COMPLEXITY IS O(n)
// This Naive Method can cause OVERFLOW. Use Efficient solution instead of this which is commented down below.

#include <iostream>

using namespace std;

int countzero(int n){
    long long int ans = 1;
    for(int i=2; i<=n ; i++)   //finding the factorial
      ans = ans*i;
     
    int c = 0;
    while(ans % 10 ==0)       //checking if the trialing digit is zero
    {    
        c++;                   // counting the trailing zeros
        ans  =ans/10;          // by dividing the factorial   
    }
 
    return c;
}

int main()
{
    int n;
    cin >>n;
   cout<< countzero(n);

    return 0;
}

/*
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

*/
