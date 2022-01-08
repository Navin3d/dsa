#include <iostream>
#include<vector>
using namespace std;

    int partition (int a[], int l, int h)
    {
       int i=l-1;
       int pivot = a[h];
       for( int j=l; j<=h ;j++ )
       {
           if(a[j] < a[h] )
           {
               i++;
               swap(a[i] , a[j]);
           }
       }
       
       swap(a[h], a[i+1]);
       return i+1;
       
       
    }

       void quickSort(int arr[], int l, int h)
    {
        // code here
        if(l>=h) return;
        
        int p = partition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr, p+1 ,h);
        
    }
int main()
{
    int a[]= {1,4,2,3,-1,0,21};
    int n = a.size();
    quickSort(a,0,n-1);
    for(int i=0; i<n ; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}