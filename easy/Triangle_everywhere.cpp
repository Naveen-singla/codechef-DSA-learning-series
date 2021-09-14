#include<bits/stdc++.h>

using namespace std;

int main()
{

int a,b,c;
cin >> a >> b >> c;
if(a+b>c && b+c>a && c+a>b)
{
if(a != b && b != c ) cout << "3";
else if( a == b && b != c || a == c && c != b || b==c && c != a) cout << "2";
else if( a==b && b==c ) cout << "1";
}
else cout << "-1";

return 0;
}
