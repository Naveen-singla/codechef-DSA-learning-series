#include<iostream>
#include<climits>

using namespace std;

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int query;
cin >> query;
while(query--)
{
    int N;
    cin >> N; 
    int Si,Pi,Vi, max;

    for (int i = 1; i <= N; i++)
    {
       cin >> Si >> Pi >> Vi;
       
       int sum = ((Pi/(Si+1))*Vi);

       if (i == 1) 
        max = sum;

       else
       {
           if (sum>max) max = sum;  
       }   
    }
    cout << max <<"\n";
}

return 0;
}
