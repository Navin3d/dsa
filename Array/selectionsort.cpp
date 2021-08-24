#include <iostream>
using namespace std;

void selection_sort(int a[] , int n){
    for(int i=0 ; i<n-1 ;i++)
    {
        int j, min = i;
        
        for(int j=i; j<=n-1  ;j++){
            if(a[j]<a[min])
               min = j;
        }
        
        swap(a[min] , a[i]);
    }
}

int main()
{
   
    int a[] = {5,4,1,3,2};
    int size = sizeof(a)/sizeof(a[0]);
    selection_sort(a,size);
   for(int i=0;i<size;i++)
     cout<<a[i]<<" ";
    return 0;
}
