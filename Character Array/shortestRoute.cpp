#include <iostream>
#include <cstring>
using namespace std;

int main(){
         
         char route[100];
         cin.getline(route, 100);
         int x=0, y=0;
         for(int i=0; route[i]!='\0' ; i++){
             if(route[i] == 'N')
                y++;
            else if(route[i] == 'S')
                y--;

             else if(route[i] == 'E')
                x++;
                 else if(route[i] == 'W')
                x--;
         }

         cout<<x<<" "<<y;
        //FIRST QUADRANT
        if(x>=0 and y>=0){
            while(x--)
                cout<<'E';
                while(y--)
               cout<<'N';     
        }


        //SECOND QUADRANT
      else  if(y>=0 and x<=0){
            while(y--)
              cout<<'N';

              while(x++)
                  cout<<'W';
              
        }

         //THIRD QUADRANT
     else   if(y<=0 and x<=0){
            while(y++)
              cout<<'S';

              while(x++)
                  cout<<'W';
             
        }

         //FOURTH QUADRANT
      else  if(y<=0 and x>=0){
            while(y++)
              cout<<'S';

              while(x--)
                  cout<<'E';
              
        }
}