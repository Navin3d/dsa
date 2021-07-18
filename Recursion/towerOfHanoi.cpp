#include <bits/stdc++.h>
using namespace std;

void shifts(int n , char src , char help , char dest){
    if(n==0)
      return;
     
  shifts(n-1, src,dest,help);
  cout<<"Shift"<<" disk"<<n<<" from "<< src<<" to "<<dest<<endl;
  shifts(n-1,help,src,dest); 
    
}
int main()
{
  int n;
  cin>>n;
  char src = 'A';
  char dest = 'C';
  char help ='B';
 shifts(n ,  src , help, dest);
}
