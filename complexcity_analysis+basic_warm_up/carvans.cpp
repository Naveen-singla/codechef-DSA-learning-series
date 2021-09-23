#include<bits/stdc++.h>

using namespace std;

int main()
{

int query;
cin >> query;
while (query--)
{
    int n;
    cin >> n;
    int arr[n];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 1; i < n; i++) // 4 5 1 2 3
    {
        if(arr[i-1]>=arr[i]) count++;
    }
    cout << count <<"\n";
}


return 0;
}
