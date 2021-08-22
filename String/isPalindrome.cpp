#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char a[]){
    int start = 0;
    int end = strlen(a) - 1;
    while(start<end){
        if(a[start]==a[end]){
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }
    
    return true;
}

int main()
{    
   char a[100];
   cin.getline(a,100);
   if(isPalindrome(a))
     cout<<"Palindrome";
  else
    cout<<"Not a Palindrome";
}
