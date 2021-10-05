#include <iostream>
using namespace std;

void bubble_sort(int a[] , int n){
    for(int i=0;i<n;i++){
        for(int j=1 ; j<n-i;j++){
            if(a[j]<a[j-1])
               swap(a[j] , a[j-1]);
        }
    }
}

int main()
{
   
    int a[] = {1,5,7,9,12,17,24};
    int size = sizeof(a)/sizeof(a[0]);
    bubble_sort(a,size);
   for(int i=0;i<size;i++)
     cout<<a[i]<<" ";
    return 0;
}
