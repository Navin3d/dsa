#include<iostream>
#include <cmath>
using namespace std;


// tc o(n^2)
int naiveFunction(int a[] , int n){
	int maxdiff = a[1]-a[0];     
	for(int i=0;i<n-1;i++){
		for(int j=i+1;i<n;j++){        
			int currentMax= a[j]-a[i];
			maxdiff = max(currentMax, maxdiff);
		}
	}

	return maxdiff;
}


void effiFunction(int a[],int n){
	int ans= a[1] - a[0];
	int minValue = a[0];
	for(int j=1;j<n;j++){
          ans = max( ans , a[j]-minValue);
          minValue = min(a[j] , minValue);
	}
	cout<< ans;
}


int main(){
	int a[] = {7,9,10,6,4,8,1};         //o/p 2
   int n= sizeof(a)/sizeof(a[0]);
   cout<<naiveFunction(a,n);
    effiFunction(a,n);
}
