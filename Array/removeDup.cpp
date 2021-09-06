#include <iostream>
using namespace std;

int dup1(int a[] , int n){               //naive ->  tc o(n) aux space o(n)
   int temp[n];
   temp[0] = a[0];
   int size=1;  
   for(int i=1;i<n;i++){
       if(a[i] != temp[size-1]){
           temp[size] = a[i];
           size++;
       }
   }
   
   for(int i=0;i<size;i++){
       cout<<temp[i]<<" ";
   }
   
}


int dup2(int a[] , int n){             // efficient(campared to naive) -> tc o(n) aux space o(1)
    int size = 1;
    for(int i=1;i<n;i++){
        if(a[i] != a[size-1]){
            a[size] = a[i];
            size++;
        }
    }
    
      
   for(int i=0;i<size;i++){
       cout<<a[i]<<" ";
   }
   
}

int main() {
     int a[] = {2,3,4,4,5,6,6,7,7,7,7,7,7,9,9,9,9,9,9};   
     int size = sizeof(a)/sizeof(a[0]);
     int ansNaive =  dup1(a,size);
     cout<<endl;
     int ansEff =  dup2(a,size);
     return 0;
   
}
