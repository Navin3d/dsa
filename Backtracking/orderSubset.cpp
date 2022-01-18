//ERROR 


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printSubset(char *a,char *b, int i,int j, vector<int> &ans)
{
	if(a[i]=='\0')
	{  
        b[j] = '\0';
        string temp(b);
        ans.push_back(temp);
        
        //To print empty subset
        if(b[0] == '\0')
        {
            cout<<"Null"<<endl;
        }
		cout<<b<<endl;
		return;
	}

	//Including ith index
	b[j] = a[i];
	printSubset(a,b,i+1, j+1, ans);

	//excluding ith index
	printSubset(a,b,i+1,j, ans);
}


int main(){
// #ifndef ONLINE_JUDGE		
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif

    char a[100];
    cin>>a;
    char b[100];
    vector<int> ans;
    printSubset(a,b,0,0, ans);
     sort(ans.begin(), ans.end());
   for(string a: ans)
   {
   	cout<<a<<endl;
   }

    return 0;

}