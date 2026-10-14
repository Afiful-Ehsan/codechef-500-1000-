#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        int N, X;
        cin >> N >> X;

        int sub = (N + 5) / 6;

        cout << sub* X << endl;
    }

    return 0;
}
