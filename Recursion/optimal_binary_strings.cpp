/****************
*oPTIMAL bINARY STRINGS
*recursion
*Book -1 Page 175
*count binary string of length n,which has no consecutive ones;
e.g n=2   10 , 01 ,00   but not 11 so ans =3
****************/

#include<iostream>
using namespace std;

int total_binarystrings(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 2;  

    int ans=0;

    //if we put 0 then n-1 if we put 1 then n-2
    ans = total_binarystrings(n-1) + total_binarystrings(n-2);

    return ans;    
}

int main()
{
    int n;
    cin>>n;
    cout<<total_ways(n);
}