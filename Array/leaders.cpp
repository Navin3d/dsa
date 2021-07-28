// time complexity O(n)
#include <iostream>
using namespace std;

void leader(int a[] , int n)
{
    int lead = a[n-1];
    cout<<lead<<" ";
    for(int i=n-1; i>=0 ; i--){ 
        if(a[i] > lead ){  
            cout<<a[i]<<" ";   
            lead = a[i];      
        }
    }
}

int main()
{
    int a[] = {7,10,4,10,6,5,2 };  //o/p 2,5,6,10
    int n=sizeof(a)/sizeof(a[0]);
    leader(a,n);
    return 0;
}
