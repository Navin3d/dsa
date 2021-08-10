#include <iostream>
using namespace std;

void bubble_sort(int a[] , int n){
    for(int i=1;i<n;i++){
        for(int j=0 ; j<(n-i-1);j++){
            if(a[j]>a[j+1])
               swap(a[j] , a[j+1]);
        }
    }
}

int main()
{
   
    int a[] = {1,5,7,9,12,17,24};
    int size = sizeof(a)/sizeof(a[0]);
    int key = 5;
    bubble_sort(a,size);
   for(int i=0;i<size;i++)
     cout<<a[i]<<" ";
    return 0;
}
