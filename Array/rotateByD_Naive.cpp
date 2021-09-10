//left rotate by d
#include <iostream>
using namespace std;

// rotate by one
void rotateOne(int a[], int n){
      int temp=a[0];
      for(int i=1;i<n;i++){
      	a[i-1] = a[i];
      }	
     a[n-1] = temp;

}

//rotate one, D times
void rotateByD(int a[], int n, int D){
	for(int i=0;i<D;i++){
		rotateOne(a,n);              //calling rotateOne, D times
	}
}

int main(){

	int a[] = {2,6,8,7,9,10};
	int n=sizeof(a)/sizeof(a[0]); 
	int D;
	cout<<"Enter D: ";
	cin>>D;
    rotateByD(a,n,D);        //time complexity is o(nd) and aux space is o(1)
    for(int i=0;i<n;i++)
    	 cout<<a[i]<<" ";
}