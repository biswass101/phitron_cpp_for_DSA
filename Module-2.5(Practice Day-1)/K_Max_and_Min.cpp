#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *arr = new int[3];
    for(int i = 0 ;i < 3; i++) cin >> arr[i];
    int mx = arr[0];
    int mn = arr[0];
    for(int i = 1; i < 3; i++) {
        if(arr[i] > mx) mx = max(mx, arr[i]);
        if(arr[i] < mn) mn = min(mn, arr[i]);
    }
    cout << mn << " " << mx << endl;
    return 0;
}