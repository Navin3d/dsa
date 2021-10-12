#include <iostream>
using namespace std;

int main(){
    char ans[][10]= {
   "one",
   "two",
   "three",
   "four",
   "five",

    };

    cout<<ans[2][3]<<endl;   //e

   cout<<ans[2]<<endl;     //three

   //printing all the rows of the 2d character array

   for(int i=0 ; i<5 ; i++){
       cout<<ans[i]<<endl;
   }    


   return 0;
}