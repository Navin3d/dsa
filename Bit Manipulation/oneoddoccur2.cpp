#include <iostream>
using namespace std;
int oneOdd(int arr[] , int n){
    
    int res=0;
    for(int i =0;i<n;i++)
       res = res^arr[i];
     
    return res;
}

int main()
{
    	int arr[]= {4,3,4}, n = 3;
	
    cout<<oneOdd(arr, n);
    return 0;
}
