#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int n,x;
         cin>>n>>x;
         if(n<=x&&x%n==0)
         {
             cout<<"yes"<<endl;
         }
         else
         {
             cout<<"no"<<endl;
         }
    }
        
      return 0;  
    }