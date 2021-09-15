#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{

int n,k,j;
unordered_map<int, int> map;
bool flag = false;
cin >> n >> k;
for (int i = 0; i < n; i++)
{
    cin >> j;
    map[j]++;
}
if (map[k])
{
    cout << "1";
}
else cout << "-1";

return 0;

}
