//leader in arrays
// prints all the elements which is greater than all it's element on the right
#include <iostream>
using namespace std;


//naive method : time complexity is o(n^2)
void leadersNaive(int a[], int n){
     for(int i=0;i<n ;i++){
           int flag=0;
     	  for(int j=i+1;j<n;j++){
     	  //	if(a[i]   a[j])
     	  	if(a[j] >= a[i]){
     	  		flag= 1;
     	  		break;
     	  	}
     	  }
     	  if(flag==0){
     	  	cout<<a[i]<<" ";
     	  }
     }

}


//efficient menthod: tc is o(n)
void leadersEff(int a[] , int n){
        int currentLeader = a[n-1];
        cout<<currentLeader<<" ";     //last element is a leader

        for(int i= n-2 ; i>=0 ;i--){  //from second last to first element
               if(currentLeader  <  a[i]){
                    cout<<a[i]<<" ";
                    currentLeader = a[i];
               }
        }
}

int main(){

	int a[] = {2,10,7,3,8};
	int n=sizeof(a)/sizeof(a[0]); 
      leadersNaive(a,n);
      cout<<endl;
      leadersEff(a,n);         
 
}