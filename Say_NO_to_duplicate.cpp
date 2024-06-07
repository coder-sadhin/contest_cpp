#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        int arr[m];
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+m);
        cout<<arr[0]<<" ";
         for (int i = 1; i < m; ++i) {
            if (arr[i] != arr[i - 1]) {
                cout << arr[i] << " ";
            }
        }
        cout<<endl;

    }
    
    return 0;
}

