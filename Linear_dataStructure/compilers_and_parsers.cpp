#include<iostream>
#include<stack>

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
    int count = 0,ans = 0;
    bool flag = false;
    stack<char> parser;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]=='<')
        {
            parser.push(str[i]);
        }
        else
        {
        if(parser.empty() == true) break;
        else{
            parser.pop();
            count+=2;
            }
        } 
        if (parser.empty() == true)
        {
            ans = count;
        }   
    }
    cout << ans <<"\n";  
}


return 0;
}


// int main() {
// 	ios_base :: sync_with_stdio(0);
// 	cin.tie(0);
// 	cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         stack<char> S;
//         int ans = 0, a = 0;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == '<')
//                 S.push(s[i]);
//             else
//             {
//                 if (S.empty() == true)
//                     break;
//                 else
//                 {
//                     a += 2;
//                     S.pop();
//                 }
//             }
//             if (S.empty() == true)
//                 ans = a;
//         }
//         cout << ans << "\n";
//     }

// 	return 0;
// }