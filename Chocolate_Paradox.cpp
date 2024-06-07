#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    bool isPossible = false;

    for (int a = 0; a <= z / x; ++a)
    {
        for (int b = 0; b <= z / y; ++b)
        {
            if ((a*x + b*y) == z)
            {
                isPossible = true;
                break;
            }
        }
        if (isPossible)
        {
            break;
        }
    }
    if(isPossible){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}

