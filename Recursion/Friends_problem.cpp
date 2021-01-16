/****************
*Friends Problem
*recursion
*Book -1 Page 175
*total n people go to party on bikes .each bike can hold 1 or 2 people .Find the total ways they can go
****************/

#include<iostream>
using namespace std;

//we start from first person
int total_ways(int n)
{
    if(n==0 || n==1)
        return 1;

    int ans=0;

    //if person goes alone then the rest can go in 1 * total ways
    //if person goes as couple so he can choose the people to go with in n-1C1 ways multiply by total ways 
    ans = 1*total_ways(n-1) + (n-1) * total_ways(n-2);

    return ans;    
}

int main()
{
    int n;
    cin>>n;
    cout<<total_ways(n);
}