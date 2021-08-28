#include <iostream>

using namespace std;

int main()
{
   int row;
   cin>>row;
   char a[100][100];
   
   cin.get();
   for(int i=0 ; i<row ; i++){
       cin.getline(a[i] , 1000);
   }
   
    for(int i=0 ; i<row ; i++){
       cout<<a[i]<<endl;
   }
    return 0;
}
