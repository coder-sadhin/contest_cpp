#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,tk;
    cin>>n>>tk;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
 
    // if(n == 1){
    //     cout<<arr[0]+tk<<endl;
    // }else{
    //     int max=arr[n-1];
    //     for (int i = n-2; i >0 ; i--)
    //     {
    //         tk-=(max-arr[i]);
    //     }
    //     cout<<arr[0]+tk<<endl;
        
    // }

    for (int i = 0; i < n - 1; i++)
    {
        int d = arr[i + 1] - arr[i];
        int cost = d * (i + 1);

        if (cost <= tk)
        {
            tk -= cost;
            for (int j = 0; j <= i; j++)
            {
                arr[j] = arr[i + 1];
            }
        }
        else
        {
            int in = tk / (i + 1);
            for (int j = 0; j <= i; j++)
            {
                arr[j] += in;
            }
            tk = 0;
            break;
        }
    }

    if (tk > 0)
    {
        int in = tk / n;
        for (int i = 0; i < n; i++)
        {
            arr[i] += in;
        }
    }

    cout << arr[0] << endl;

    
    return 0;
}