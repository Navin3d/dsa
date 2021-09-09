//left rotate by 1 (counter-clockwise)
// time complexity is o(n) and auxiliary space is o(1)
#include <iostream>
using namespace std;

void rotateOne(int a[], int n){
	int temp= a[0];
	for(int i=1;i<n;i++){
		a[i-1] = a[i];
	}
	a[n-1]=temp;
}

int main(){

	int a[] = {2,6,8,7,9,10};
	int n=sizeof(a)/sizeof(a[0]); 
    rotateOne(a,n);
    for(int i=0;i<n;i++)
    	 cout<<a[i]<<" ";
}
