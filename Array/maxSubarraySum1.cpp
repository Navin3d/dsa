//naive 
//o(n3)
#include <iostream>
using namespace std;

int main() {
  int a[] = {-4,1,3,-2,6,2,-8,-9,4};
  int n=sizeof(a)/sizeof(a[0]);  //9

  int currentSum=0;
  int maxSum=0;
  //left and right is used to print maximum subarray
  int left=-1;
  int right = -1;
  int i=0,j=0,k=0;
  for(i=0;i<n;i++){
    for(j=i;j<n;j++){
      currentSum=0;       //important
      for(k=i;k<=j;k++){
        currentSum += a[k];
      }
        if(currentSum>maxSum){
          maxSum= currentSum;
          left=i;
          right=j;
        }
      }
    }

  cout<<maxSum<<endl;
  for(int sub=left;sub<=right;sub++){
    cout<<a[sub]<<" ";
  }

}
