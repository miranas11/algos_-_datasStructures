/****************
*Knapsack recursion
*recursion
*Book -1 Page 194
*a theif wants to steal some items from shop given he can take max c amount of weight find out the max profit he can make.
****************/
#include<iostream>
#include<algorithm>
using namespace  std;


int profit(int n,int w[],int p[],int c)
{   
    //if n==0 or there is no space left
    if(n==0 || c==0)
        return 0;

    int inc=0,exc=0;
    int ans=0;

    if cuurent item can fit in left capacity
    if(w[n-1] <= c )
    {
        //if current item is taken
        inc= p[n-1] + profit(n-1,w,p,c-w[n-1]);
    }
   
    //if current item not included
    exc=profit(n-1,w,p,c);
    
    
    ans=max(inc,exc);
    return ans;

    

}

int main()
{
    int n;
    cin>>n;
    cout<<"Enter weights";
    int weight[n];
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    cout<<"Enter Prices";
    int prices[n];
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }
    int c;
    cout<<"enter capacity";
    cin>>c;

    cout<<profit(n,weight,prices,c);
}