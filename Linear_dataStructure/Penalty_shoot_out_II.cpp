#include<iostream>

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
string goals;
bool flag = false;
int n,a_sum=0,b_sum=0,i;
cin >> n;
cin >> goals;
for ( i = 0; i < (2*n); i++)
{
    if(i%2==0)
    {
        if(goals[i]=='1') a_sum++;
    }
    else
    {
        if(goals[i]=='1') b_sum++;
    }

    if((a_sum == n-1 && a_sum-b_sum==2)) 
    {
        cout << i+2 <<"\n";
        flag = true;
        break;
    }
    else if( (b_sum == n-1 && b_sum-a_sum == 2) )
    {
        cout << i+1 <<"\n";
        flag = true;
        break;
    }
}
 if(flag==false)
 cout << 2*n;

}

return 0;
}
