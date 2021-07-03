// two odd occuring number

#include <bits/stdc++.h>
using namespace std;

void OddTwo(int arr[], int n)
{
   int  x=0, r1=0 ,r2 =0;
   for(int i=0;i<n;i++)
      x=x^arr[i];   //x = 1^5 =4

     int sn = x& ~(x-1);  //4
     
//      4 = 100
//      3 = 011      
//     ~3 = 100
//    4&3 = 100 

// 1 -> 001, 2 -> 010 , 3 -> 011 ,4 -> 100,5 -> 101  

     for(int i =0;i<n;i++){
         
         if((arr[i] & sn) != 0)    //5^0 =  5        
            r1 = r1^arr[i];     
          else
            r2 = r2^arr[i];        // 1^2^3^2^1^1^3 =  1
     }
     
     
     cout<<r1<<" "<<r2;
}

int main()
{
	int arr[] = { 1,2,3,2,1,1,5,3 }; // 1,5
	int n = sizeof(arr) / sizeof(arr[0]);
    OddTwo(arr, n);
}
