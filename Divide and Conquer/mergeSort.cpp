#include <iostream>
#include <vector>
using namespace std;

 void merge(int arr[], int l, int m, int r)
    {  
     vector<int> t;
        int i =l;
        int j=m+1;
        
         while(i<=m and j<=r )
         {
             if(arr[i] < arr[j]){
                t.push_back(arr[i]);
                i++;
             }
             else{
                 t.push_back(arr[j]);
                 j++;
             }
         }
         
           while(i<=m)
         {
                t.push_back(arr[i]);
                i++;
             }
                 while(j<=r)
         {
                t.push_back(arr[j]);
                j++;
             }
             
             int k=0;
             for(int p=l; p<=r ;p++){
                 arr[p] = t[k];
                 k++;
             }
            return; 
    }

    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r)  return;
        
        int m= (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1 ,r);
        merge(arr,l,m,r);
    }


int main()
{
  int a[] = {2,3,1,89,55,1,-3};
   int n=a.size();
   int s= 0;
   int e = n-1;
   mergeSort(a,s,e);
  for(int i=0 ; i<n ;i++)
  {
      cout<<a[i]<<endl;
  }

    return 0;
}
