#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    while (Q--)
    {
        string s;
        int K;
        cin >> s >> K;

        int count = 0;
        int l = 0, r = s.length() - 1;

        for(;l < r;)
        {

            count += abs(s[l] - s[r]);

            l++;
            r--;
        }

        if (count <= K)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}