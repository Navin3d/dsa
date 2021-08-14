#include<iostream>
using namespace std;
void sievefunc(int sieve[]){     //o(n log(log n))

 for(int i=2; i <=1000000 ; i++){
	 sieve[i] = 1;
 }
 for(int i=2 ; i*i <= 1000000; i++){
	 if(sieve[i] == 1){
		 for(int j=i*i; j<=1000000;j=j+i){
			 sieve[j] = 0;
		 }
	 }
 }
}
 

int main() {
	int n;
	cin>>n;
	int sieve[1000000] = {0};
	sievefunc(sieve);
	int csum[1000000];
	for(int i=2; i <=1000000 ; i++)
	   csum[i] = csum[i-1] + sieve[i];
	while(n--){                              //Solved in CP 
		int a,b;
		cin>>a>>b;
     cout<<csum[b] - csum[a-1] << endl;
	}
	return 0;
}
