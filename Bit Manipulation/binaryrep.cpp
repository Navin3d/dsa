//TO FIND THE BINARY REPREASENTATION OF A NUMBER BY RECURSION

#include <iostream>
using namespace std;

void prints(int n){
   int (n==0)
     return;
   prints(n/2);
   cout<<n%2;
}


int main()
{
    int n;
    cin>>n;
    prints(n);
    return 0;
}
