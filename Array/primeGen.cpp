#include<iostream>
using namespace std;

bool isPrime(int x){
    if(x==1)
        return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        for(int i=m;i<=n;i++){
            if(isPrime(i))
                cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}

----------------------------------------------------------------------------------------------------------
//TO CHECK .....
  
//   #include <bits/stdc++.h>
// using namespace std;

// int sieve[1000000];
// //generating sieve
// void sieveFunc(){
//     sieve[0] = 0;
//     sieve[1] = 0;
//   for(int i=2 ; i*i <= 1000000 ; i++){
//       sieve[i] = 1;
//   }
//   for(int i=2 ; i*i <= 1000000 ; i++){
//       if(sieve[i] == 1){
//           for(int j=i*i;j<=1000000; j +=i){
//                 sieve[j]= 0;
//           }
//       }
//   }
// }

// //returning all the prime numbers upto sqrt(r)
// vector<int> generatePrime(int n){
//     vector<int> ds;
//     for(int i = 2; i<=n ;i++){  //n= sqrt(r)
//      if(sieve[i] == 1)
//          ds.push_back(i);
//     }
//     return ds;
// }

// int main(){
//     sieveFunc();
//     int testCase;
//     cin>>testCase;
//     while(testCase--){
//         int l, r;// 3 18
//         cin>>l>>r;

//         //step 1
//         //storing all primes in a data structure(vector)
//         vector<int> primes = generatePrime(sqrt(r));

//         //step 2
//         //creating a dummy array and marking everything to 1
//         int dummy[r-l+1];
//         for(int i=0; i< r-l+1 ; i++)
//             dummy[i] = 1;

// //        int dummy[r-l];  //summy[
// //        for(int i=0; i< r-l ; i++)
// //            dummy[i] = 1;

//         //step 3
//         //marking multiples of prime number(stored in the vector at step 2) as 0
//         for(auto i: primes){
//             int firstMultiple = (l/i)*i;
//             if(firstMultiple<l)
//                 firstMultiple = firstMultiple+i;
//             for(int j=max(firstMultiple , i*i) ; j<=r ; j += i){
//                 dummy[j-l] = 0;
//             }
//         }

//          //step 4
//         //printing all the prime numbers withing the given range
//         for(int i=l ; i<=r ; i++){
//             if(dummy[i-l] == 1){
//                 cout<<i<<endl;
//             }
//         }

//     }

//     return 0;
// }
