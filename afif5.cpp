#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {

int n;
cin>>n;

   if(n<=10)
   {
    cout<<"lower double"<<endl;
   }
   else if(n>10&&n<=15)
{
    cout<<"lower single"<<endl;
}
 else if(n>15&&n<=25)
   {
    cout<<"upper double"<<endl;
   }
   else if(n>25&&n<=30)
   {
    cout<<"upper single"<<endl;
   }
    }


    return 0;
}