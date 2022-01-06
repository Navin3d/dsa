#include <iostream>
using namespace std;

int findFirst(int a[], int n, int key){
    if(n==0)
      return -1;
    if(a[0] == key)
        return 0;
    
    int subindex = findFirst(a+1, n-1, key);
    if(subindex != -1)
       return subindex+1;
       
       return -1;
  
}

int main()
{
    int a[] = {3,4,1,4,43,324,3,64,65};
    int n= sizeof(a)/sizeof(a[0]);
    int key;
    cin>>key;
   cout<< findFirst(a,n,key);
    
    return 0;
}
