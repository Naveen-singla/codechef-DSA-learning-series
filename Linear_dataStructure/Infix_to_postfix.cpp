#include<iostream>
#include<bits/stdc++.h>
#include<stack>

using namespace std;


int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixToPostfix(string str,int n)
{
    stack<char> postfix;
    string result;

        for (int i = 0; i < n; i++)
        {
            char c = str[i];

            if((c>='A' && c<='Z') || (c>='a'&& c<='z') || (c>='0' && c<='9') )
            result+=c;

            else if(c=='(') 
            postfix.push('(');

            else if(c==')')
            {
                while (postfix.top()!='(')
                {
                    result += postfix.top();
                    postfix.pop();
                }
                postfix.pop();
                
            }
            else
            {
                while( !postfix.empty() && (prec(c) <= prec(postfix.top())))
                {
                    result+=postfix.top();
                    postfix.pop();
                }
                postfix.push(c);
            }
            
        }
        while(!postfix.empty())
        {
            result += postfix.top();
            postfix.pop();
        }
    return result;
}

int main()
{

int t;
cin >> t;
while (t--)
{
    int n;
    string str;
    cin >> n >> str;
    cout << infixToPostfix(str,n) << endl;
}

return 0;
}
