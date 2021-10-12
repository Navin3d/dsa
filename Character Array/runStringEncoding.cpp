#include<iostream>
#include<cstring>
using namespace std;

// Run Length Encoding for String Compression
// if compressed string is bigger than orignal return orignal string
// Input : aaabbccddee
// Output : a3b2c2d2e2

// Input : abcd
// Ouput : abcd 

string compressString(string str){
//int n= strlen(str);
       int n= str.length();
       string output;
//time com is linear, we are iterating it only once, i is also incemented 
//in while loopm depending on the situations
       for(int i=0; i<n ; i++){
            int c=1;
           while(str[i] == str[i+1] and i<n-1){
                 c++;
                 i++;
           }

           output += str[i];
           output += to_string(c);
       }

       if(n < output.length())
          return str;

        else
   return output;

}


int main(){

    string s1 = "aaabbccddee";
    cout << compressString(s1)<<endl;

    string s2 = "abcd";
    cout<< compressString(s2)<<endl;


    return 0;
}