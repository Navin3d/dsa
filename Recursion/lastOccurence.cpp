#include <iostream>
using namespace std;

int lastOccurance(int a[], int n, int key){
    if(n==0)
      return -1;
    int subindex = lastOccurance(a+1, n-1 , key);
    if(subindex == -1)
    {
        if( a[0]==key)
           return 0;
           else
            return -1;
    }
    else
    {
        return subindex+1;
    }
  
}

int main()
{
    int a[] = {3,4,1,1,1,43,2,4,1,4};
    int n= sizeof(a)/sizeof(a[0]);
    int key;
    cin>>key;
   cout<< lastOccurance(a,n,key);
    
    return 0;
}
