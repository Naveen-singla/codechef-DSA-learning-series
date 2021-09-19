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

long long int num_of_elements,sum=0;
long long int d1, d2;
cin >> num_of_elements >> d1 >> d2;
int d3 = ((d1+d2)%10);
long long int num_sums = ((2*d3)%10) + ((4*d3)%10) + ((6*d3)%10) + ((8*d3)%10);
if(num_of_elements==2) sum = d1+d2;
else sum = d1+d2+d3+((num_of_elements-3)/4)*num_sums;

int left_out_num = ((num_of_elements-3)%4);
int x = 2;
for (int i = 1; i <= left_out_num; i++)
{
     sum += ((x*d3)%10);
     x = (2*x)%10;
}
  if (sum%3==0) cout << "YES" <<"\n";
  else cout << "NO" << "\n";
    
}
return 0;
}
