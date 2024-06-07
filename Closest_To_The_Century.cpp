#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int closest = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>closest)
            {
                closest = arr[i];
            }
        }

        cout<<closest<<endl;
    }
    return 0;
}