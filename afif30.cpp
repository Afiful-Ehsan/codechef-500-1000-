#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    
	    int n,x,y;
	    cin>>n>>x>>y;
	    if(y/x<=n && y%x==0)
	    {
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	
  return 0;
}
