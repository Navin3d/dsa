#include <iostream>
using namespace std;

int power(int a, int n)
{
    if(n==0)   return 1;
    return a*power(a, n-1);
}


int powerOptimize(int a ,int n)
{
    if(n==0)
      return 1;
      
      int subpower = powerOptimize(a , n/2);
      int subpowersq = subpower*subpower;
      if(n%2 != 0){
          return a*subpowersq;
          
      }
      
      else{
          return subpowersq;
      }
}

int main()
{
    int a,n;
    cin>>a>>n;
   cout<< power(a,n)<<endl;
    cout<< powerOptimize(a,n)<<endl;
    return 0;
}
