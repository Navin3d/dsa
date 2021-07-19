#include <iostream>
using namespace std;

int j(int n,int k){
    if(n==0)
      return 0;
    return (j(n-1, k)+k) % n;
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<j(n,k);
    return 0;
}
