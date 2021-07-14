// Array of n numbers values ranges from [1...n+1]. Every number occur exacty once.Hence one is missing.find missing number

#include <iostream>
using namespace std;

int missing(int a[] , int size,int n){
    int r1=0;
   for(int i=1;i<=n;i++)
        r1 = r1^i;
       int r2=0; 
   for(int j=0;j<size;j++)
       r2=r2^a[j];
       
   return (r1^r2);
}

int main()
{   int n=5;
    int a[] = {1,3,5,2};
    int size = sizeof(a)/sizeof(a[0]);
    
    cout<<missing(a,size,n);
}
