#include<iostream>
#include<stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
int n, depth = 0, depth_starting_index = 0, char_length = 0, max_char_length_pos = 0, max_char=0, max_depth=0;
cin >> n;
stack<int> bracket;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}


for (int i = 0; i < n; i++)
{
    if(arr[i] == 1){
        bracket.push(arr[i]);
        max_depth++;

    }
    else if(arr[i] == 2)
    {
        max_depth--;
        bracket.pop();
    }
    if (max_depth > depth)
    {
        depth_starting_index = i+1;
        depth = max_depth;
    }
    max_char++;
    if (bracket.empty())
    {
        if(max_char > char_length)
        {
            char_length = max_char;
            max_char_length_pos = (i+2 - max_char);
        }
        max_char = 0;
    }
    
}
cout << depth <<" "<< depth_starting_index<<" "<< char_length <<" "<< max_char_length_pos << "\n";
return 0;

}