//left rotate by d (efficient method)
#include <iostream>
using namespace std;

//rotate one, D times
void rotateByD(int a[], int n, int D){
	int temp[D];
	for(int i=0 ; i<D ;i++){      
		temp[i] = a[i];
	}                             // temp[] = {2,6};
   for(int i=D;i<n;i++){
   	a[i-D] = a[i];      
   }                                    // a[] = {8,7,9,10,9,10}
     for(int i=0; i<D ; i++){
     	   a[n-D+i] = temp[i];
     }
}

int main(){

	int a[] = {2,6,8,7,9,10};
	int n=sizeof(a)/sizeof(a[0]); //6
	int D; //2
	cout<<"Enter D: ";
	cin>>D;
    rotateByD(a,n,D);        //time complexity is o(nd) and aux space is o(d)
    for(int i=0;i<n;i++)
    	 cout<<a[i]<<" ";
}