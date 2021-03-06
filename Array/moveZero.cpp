#include <iostream>
using namespace std;

void moveZeroN(int a[] , int n){           //naive tc-> o(n^2)
   for(int i=0;i<n ;i++){
       if(a[i] == 0){
           for(int j=i; j<n ; j++){
               if(a[j] != 0)
                  swap(a[i] , a[j]);
           }
       }
   }
   for(int i=0;i<n ;i++)
       cout<<a[i]<<" ";
}


// input = [0,1,0,3,12]
// Output: [1,3,12,0,0]

void moveZeroE(int a[] , int n){              //effi  tc -> o(n)
    int count= 0;
    for(int i=0;i<n;i++){
        if(a[i]  != 0 ){
            swap(a[i],a[count]);
            count++;
        }
    }
    
       for(int i=0;i<n ;i++)
       cout<<a[i]<<" ";
}

int main() {
     int a[] = {2,3,0,4,0,0,5,4,0};     
     int size = sizeof(a)/sizeof(a[0]);
     moveZeroN(a,size);
     cout<<endl;
     moveZeroE(a,size);
     return 0;
   
}
