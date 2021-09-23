#include<iostream>
#include<algorithm>
using namespace std;

int convert(int a)
{
    string str = to_string(a);
    reverse(str.begin(),str.end());
    return stoi(str);
}

int main()
{

int query;
cin >> query;
int arr[query];
while(query--)
{
int a;
cin >> a;
cout << convert(a) << endl;
}

cout << endl;

return 0;
}
