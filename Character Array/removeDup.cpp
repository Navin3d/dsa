#include <bits/stdc++.h>
using namespace std;

void removeDup(char a[]){
int n = strlen(a);
if(n==0 || n==1)
  return;
  
int j = 0;
for(int i = 1; i<n;i++){
    if(a[i] != a[j]){
        j++;
        a[j] = a[i];
    }      // i is getting incremented
}
a[j+1] =  '\0';

}

int main()
{    
   char a[100];
   cin.getline(a,100);
   removeDup(a);
   
}
