#include<bits/stdc++.h>
using namespace std;


void fillArray(vector<int> arr, int i ,int n, int val)
{
   if(i==n)
   {
     //print array
      for(int ptr =0 ; ptr<n ; ptr++)
      {
        cout<<arr[ptr] << " ";
      }

      return;
   }   

   arr[i] = val;
   fillArray(arr, i+1 , n , val+1);
   arr[i] = -1*arr[i] ;
}

int main(){
#ifndef ONLINE_JUDGE        
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
 //   int arr[100] = {0};
   
   vector<int> arr = {0};
    int n;
    cin>>n;
    
    fillArray(arr, 0,n, 1);
     for(int ptr =0 ; ptr<n ; ptr++)
      {
        cout<<arr[ptr] << " ";
      }

      return 0;
} 
