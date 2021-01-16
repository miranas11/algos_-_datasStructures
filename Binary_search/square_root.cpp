/****************
*Square root using binary search
*complexity O(logN)
*Book 1 Page 101
****************/

#include<iostream>

using namespace std;

float square_root(float n)
{
    //the square root of n will be b/w 0 and n;
    int s=0;
    int e=n;
    float ans=-1;

    while(s<=e)
    {
        int m=(s+e)/2;
        if(m*m==n)
        {
            return m;
        }
        //if square of m is smaller than n then discard the left side i.e the smaller numbers than m
        else if(m*m< n)
        {
            ans=m;
            s=m+1;
        }
        //if square root of m is larger than n then discard the right side i.e greater number than m
        else
        {
            e=m-1;
        }       
    }

    //for decimal points
    float inc=0.1;
    int p=3;
    //for p precision
    for(int times=1;times<=p;times++)
    {
        //till ans sqaure is just greater than n we will increament by 0.1 or 0.01 or 0.001
        while(ans*ans<=n)
        {
            ans+=inc;
        }
        //subtract the extra inc;
        ans-=inc;
        //reduce inc from 0.1 to 0.01 then to 0.001 and so on;
        inc=inc/10;
    }

    return ans;
}


int main()
{
    float n;
    cin>>n;
    cout<<square_root(n);

}