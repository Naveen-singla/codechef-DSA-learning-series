#include<iostream>

using namespace std;

int main()
{

int query;
cin >> query;
while (query--)
{
    int n;
    cin >> n;
    int ans=0;
    while (n>0)
    {
        ans += n/5;
        n = n/5;
    }
    cout << ans << "\n";
}


return 0;
}
