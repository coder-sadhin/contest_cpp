#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, k;
        cin >> n >> k;

        int arr[100000];
        int freq[100001] = {0}; 

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int max = 0;
        for (int i = 1; i <= 100000; ++i) {
            if (freq[i] > max) {
                max = freq[i];
            }
        }

        int change = n - max;

        if (change <= k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    

    return 0;
}