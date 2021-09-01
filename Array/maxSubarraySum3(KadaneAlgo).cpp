//Kadane's Algorithm

#include <iostream>
using namespace std;

int main() {
  int a[1000];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int currentSum=0;
  int maxSum=0;

  //left and right is used to print maximum subarray
  int left=-1;
  int right = -1;

  int i=0;
  for(i=0;i<n;i++){
    currentSum +=a[i];
    if(currentSum<0){
      cs=0;
    }
    maxSum = max(currentSum, maxSum);
  }
  cout<<maxSum<<endl;
}
