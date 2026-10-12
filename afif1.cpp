#include <bits/stdc++.h>
using namespace std;

int main() {
	 
int T;
cin >> T; 

for(int i=0;i<T;i++) 
{
    float a,b,c;
    cin>>a>>b>>c;
    float d=(a+b)/2;
    if (d>c)
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
