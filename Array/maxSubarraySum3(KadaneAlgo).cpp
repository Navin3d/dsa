//Kadane's Algorithm
//o(n)

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
  int maxSum=INT_MIN;

  for(int i=0;i<n;i++){
    currentSum +=a[i];
    maxSum = max(currentSum, maxSum);
    if(currentSum<0){
      currentSum=0;
    }
  }
  cout<<maxSum<<endl;
}
