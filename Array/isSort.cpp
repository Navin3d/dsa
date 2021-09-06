
#include <iostream>
using namespace std;

bool isSort(int a[], int n){                       //o(n)
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1])
          return false;
    }
    return true;
}

// Naive
// bool isSortNaive(int a[], int n){                 //o(n^2)
// 	for(int i=0;i<n;i++){
// 		for(int j=i+1;j<n;j++){     
//             if(a[j]<a[i])
//             	  return false;
// 		}
// 	}

// 	return true;
// }



int main()
{
    int a[] = {1,7,9,12,34};
    int size = sizeof(a)/sizeof(a[0]);
    
    
    if(isSort(a,size))
       cout<<"Sorted";
    else
      cout<<"Not sorted";
    return 0;
}
