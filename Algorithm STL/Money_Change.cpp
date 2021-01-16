#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a,int b)
{
    return a<=b;
}


int main()
{
    int coins[]={1,2,5,10,50,100,200,500,2000};
    int n=sizeof(coins)/sizeof(int);
    int money;
    cout<<"Enter the amount you want change of : ";
    cin>>money;

    auto lb=lower_bound(coins,coins+n,money,compare)-coins;
    cout<<coins[lb];

}