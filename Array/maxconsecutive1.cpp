#include <iostream>
using namespace std;


void naive(int a[] , int n){
        int maxv=0;
  for(int i=0;i<n;i++){
          int c=0;
  	for(int j=i;j<n;j++){
  		if(a[j]==1)
  			c++;
  		else
  			break;
  	}
  	 maxv = max(c,maxv);
  }   

  cout<<maxv;
}

void efficient(int a[] , int n){
	    int c=0,num=0;
	for(int i=0;i<n ;i++){
		if(a[i]== 1)
			c++;

		else {
		 num = max(c,num);
			c=0;
		}
	}

	cout<<num;
}

int main(){
	int a[] = {0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0};
	int n=sizeof(a)/sizeof(a[0]);
   
    naive(a,n);
    cout<<endl;
    efficient(a,n);

}