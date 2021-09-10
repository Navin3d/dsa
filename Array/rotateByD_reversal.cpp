//left rotate by d by REVERSAL METHOD
#include <iostream>
using namespace std;

void reverse(int a[] , int start, int end){
	while(start<end){
		swap(a[start], a[end]);
		start++;
		end--;
	}
}


void rotateByD(int a[], int n, int D){
  reverse(a,0,D-1);      //reversing the 1st D element in the array a 
  reverse(a,D,n-1);      // reversing D to n
  reverse(a,0, n-1);      //reversing the whole array
}


int main(){

	int a[] = {2,6,8,7,9,10};
	int n=sizeof(a)/sizeof(a[0]); //6
	int D; //2
	cout<<"Enter D: ";
	cin>>D;
    rotateByD(a,n,D);        //time complexity is o(n) and aux space is o(1)
    for(int i=0;i<n;i++)
    	 cout<<a[i]<<" ";
}