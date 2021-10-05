//precomputinf method or cummulative sum method
// instead of final loop we are using cs to find the current and maximun sum
//o(n^2)

#include <iostream>
using namespace std;

int main() {
  int a[1000];
  int n;
  cin>>n;
  int cs[1000]={0};
  // assigning first index of cs
  cin>>a[0];
  cs[0]=a[0];

  for(int i=1;i<n;i++){
    cin>>a[i];
    cs[i]=cs[i-1]+a[i];
  }
    // cs array is assigned

  int currentSum=0;
  int maxSum=0;
  //left and right is used to print maximum subarray
  int left=-1;
  int right = -1;

  int i=0,j=0;
  for(i=0;i<n;i++){
    for(j=i;j<n;j++){
      currentSum= i>0? cs[j] - cs[i-1] : cs[j];   //important
      // if i=0, currentSum = cs[j]-cs[-1] so to avoid this, we use the above condition
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
