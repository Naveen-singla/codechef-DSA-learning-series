#include<iostream>

using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int query;
cin >> query;
while (query--)
{
    int num_games;
    cin >> num_games;
    for (int i = 0; i < num_games; i++)
    {
        int intial_state,coins_rounds,head_or_tail;
        cin >> intial_state >> coins_rounds >> head_or_tail;
        if (intial_state==1)
        {
        if (coins_rounds%2==0) cout << (coins_rounds/2) << "\n";
        else
        {
         if (head_or_tail==1) cout << (coins_rounds/2) <<"\n";
         else cout << ((coins_rounds/2)+1) << "\n"; 
        }
        }
        else
        {
        if (coins_rounds%2==0) cout << (coins_rounds/2) << "\n";
        else
        {
         if (head_or_tail==1) cout << ((coins_rounds/2)+1) <<"\n";
         else cout << (coins_rounds/2) << "\n"; 
        }
        }  
    }
    
}

return 0;
}
