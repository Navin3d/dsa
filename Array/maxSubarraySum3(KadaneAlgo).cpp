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
  int maxSum=0;

  for(int i=0;i<n;i++){
    currentSum +=a[i];
    if(currentSum<0){
      cs=0;
    }
    maxSum = max(currentSum, maxSum);
  }
  cout<<maxSum<<endl;
}
