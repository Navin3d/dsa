 #include<bits/stdc++.h>
using namespace std;

void printSubset(char *a,char *b, int i,int j)
{
	if(a[i]=='\0')
	{  
        b[j] = '\0';
        
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
	printSubset(a,b,i+1, j+1);

	//excluding ith index
	printSubset(a,b,i+1,j);
}


int main(){
#ifndef ONLINE_JUDGE		
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

    char a[100];
    cin>>a;
    char b[100];
    printSubset(a,b,0,0);

    return 0;

}