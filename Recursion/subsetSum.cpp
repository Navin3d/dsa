#include <iostream>
using namespace std;

int subset(int a[],int n ,int sum){
  if(n==0)
    return (sum==0)? 1:0;
    
 return subset(a,n-1,sum)+subset(a,n-1,sum-a[n-1]);
}

int main()
{   int a[] = {10,5,3,2,6};
    int sum  =8;
    int n=  5;
    cout<<subset(a,n,sum);
    return 0;
}
