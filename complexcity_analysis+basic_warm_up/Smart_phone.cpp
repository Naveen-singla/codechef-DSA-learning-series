#include<bits/stdc++.h>

using namespace std;

int main()
{

int n;
cin >> n;
unsigned long long int arr[n];
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
sort(arr,arr+n);
long long int sum = arr[0]*n;
for (int i = 1; i < n; i++)
{
    if(sum < (arr[i]*(n-i))) sum = arr[i]*(n-i);
}
cout << sum;
return 0;
}
