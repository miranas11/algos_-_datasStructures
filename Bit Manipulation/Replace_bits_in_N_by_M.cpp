/****************
Book 1 - page 120
****************/

#include<iostream>
using namespace std;

int clr_i_j(int n,int j,int i)
{
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;   // or pow(2,i)-1;
    int mask = a | b ;
    int ans= n & mask;
    return ans;
}

int replace_n_by_m(int n,int m,int j,int i)
{
    int ans=clr_i_j(n,j,i);
    int mask=m<<i;
    ans= ans | mask;
    return ans;
}

int main()
{
    int n,m,j,i;
    cin>>n>>m>>j>>i;
    cout<<replace_n_by_m(n,m,j,i);
}