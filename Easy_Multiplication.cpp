// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin>>n;
//     int *arr= new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     int test;
//     cin>>test;

//     for (int t = 0; t < test; t++)
//     {
//         int l,r;
//         cin>>l>>r;
//         long long val=1;
//         if( l > r ){
//             cout << "NO\n";
//             return 0;
//         }
//         for (int j = l-1; j < r; j++)
//         {
//             val*=arr[j];
//             if (val == 0) {
//                 cout << "NO\n";
//                 break;
//             }
//         }
//         if (val != 0) {
//             cout << "YES\n";
//         }
        
//     }
    
    
//     return 0;
// }



#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

   
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int t;
    cin >> t;

    
    int* newArr = new int[n + 1];
    newArr[0] = 0;

  
    for (int i = 1; i <= n; ++i) {
        newArr[i] = newArr[i - 1] + (arr[i - 1] == 0 ? 1 : 0);
    }

   
    while (t--)
     {
        int L, R;
        cin >> L >> R;
        if (newArr[R] > newArr[L - 1]) {
            cout << "NO"<<endl;
        } else {
            cout << "YES"<<endl;;
        }
    }

   
    delete[] arr;
    delete[] newArr;

    return 0;
}