#include<iostream>

using namespace std;

int main()
{

int long n;
cin >> n;
int long odd_sum = 0;
int long even_sum = 0;
for (int i = 1; i <= n; i++)
{
    even_sum = even_sum + (2*i);
}
for (int i = 1; i <= n; i++)
{
    odd_sum = odd_sum +( 2*i-1 );
}

cout << odd_sum <<" "<< even_sum;

return 0;
}
