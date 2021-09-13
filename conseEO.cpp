#include <iostream>
using namespace std;


//tc o(n^2)
int naive(int a[] , int n){

    int res=1;  //atleast 1 will the ans
    for(int i=0;i<n ;i++){
       int  c=1; //atleast 1 will be the ans
       for(int j=i+1;j<n ;j++){
            if( ((a[j]%2==0) and (a[j-1]%2 != 0)) or ((a[j]%2!=0) and (a[j-1]%2== 0)))
               c++;
            else
               break;
       }

       res = max(res, c);
    }

    return res;
}


// KADANE'S ALGORITHM
//tc o(n)
int efficient(int a[], int n){
  int res=1;
  int c=1;
  for(int i=1;i<n;i++){
      if( ((a[i]%2==0) and (a[i-1]%2 != 0)) or ((a[i]%2!=0) and (a[i-1]%2== 0)))
      {
         c++;
         res = max(res,c);
      }
      else
         c=1;
  }

  return res;
}

int main(){
	int a[] = {5,10,21,6};
	int n = sizeof(a)/sizeof(a[0]);
   cout<<naive(a,n);
   cout<<endl;
   cout<<efficient(a,n);
}
