// The LSD of odd number is 1   
// The LSD of even number is 0 

#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   if((n&1) == 1)    //if(n&1)
        cout<<"ODD";
   else
      cout<<"EVEN";
      
    return 0;
}
