#include<iostream>

using namespace std;

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int query;
cin >> query;
while (query--)
{
    int activity,laddu = 0;
    string origin;
    cin >> activity >> origin;
    while (activity--)
    {
        string str;
        cin >> str;
        if(str == "CONTEST_WON")
        {
            int x;
            cin >> x;
            laddu +=300;
            if(x<20) laddu+=20-x;;
        }
        else if (str == "TOP_CONTRIBUTOR") laddu += 300;

        else if(str == "BUG_FOUND")
        {
            int y;
            cin >> y;
            laddu+=y;
        }

        else if(str == "CONTEST_HOSTED") laddu += 50;     
    }
    
    if(origin == "INDIAN") cout << (laddu/200) << "\n";
    else
    {
        cout << (laddu/400) << "\n";
    }
}


return 0;
}
