#include<iostream>
#include<climits>

using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int query;
cin >> query;
while(query--)
{
    long long int max_token = 0, n, min = LONG_LONG_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        if(a < min) 
        {
            min = a;
            max_token+=min;    
        }
        else
        {
            max_token+=min;
        } 
    }
cout << max_token <<"\n";
}

return 0;
}
