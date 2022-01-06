
#include <iostream>

using namespace std;

bool isSorted(int a[], int n)
{
    //base case
     if(n==1)
        return 1;
     if( a[0]<a[1] and isSorted(a+1 , n-1) )
        return 1;
     return false;
}

int main()
{
    int a[] = {1,3,4,1};
    int n= sizeof(a)/sizeof(a[0]);
    cout<<isSorted(a,n);
    return 0;
}
