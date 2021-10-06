#include<iostream>
#include<algorithm>

using namespace std;

int main()
{

int query;
cin >> query;
while (query--)
{
    string str;
    cin >> str;
    if (str.length()%2 == 0)
    {
        string str_left = str.substr(0, str.length()/2);
        string str_right = str.substr(str.length()/2, str.length()-1);
        sort(str_left.begin(),str_left.end());
        sort(str_right.begin(),str_right.end());
        if (str_left==str_right)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
          
    }
    else
    {
        string str_left = str.substr(0, str.length()/2);
        string str_right = str.substr(str.length()/2+1, str.length()-1);
        sort(str_left.begin(),str_left.end());
        sort(str_right.begin(),str_right.end());
        if (str_left==str_right)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

    }
    
}

return 0;
}


