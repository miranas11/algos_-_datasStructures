/****************
*Ladder Problem
*recursion
*Book -1 Page 175
*If there are total of n steps and you can take a max of k steps find the number of ways you can reach the top of ladder
****************/

#include<iostream>
using namespace std;

//we start from top if we are at 1,2,3....k steps below top
int total_ways(int n,int k)
{
    //here n==0 is the first step,the bottom
    if(n==0)
        return 1;

    if(n<0)
        return 0;    

    int ans=0;

    for(int i=1;i<=k;i++)
    {
        ans+=total_ways(n-i,k);
    }  
    return ans;
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<total_ways(n,k);

}